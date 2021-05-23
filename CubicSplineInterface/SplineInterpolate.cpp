#include "SplineInterpolate.h"


SplineInterpolate::SplineInterpolate()
{

}


SplineInterpolate::SplineInterpolate(int n_, int TN, vector<double> Section_, vector<double> BorderConds)
{
	n = n_;
	Section = Section_;
	a = vector<double>(n + 1);
	b = vector<double>(n);
	c = vector<double>(n + 1);
	d = vector<double>(n);
	h = (Section[1] - Section[0]) / (1.0 * n);

	TaskNumber = TN;
	double x = Section[0];
	for (int i = 0; i <= n; i++)
	{
		a[i] = GetValueFunction(x);
		x += h;
	}
	Run(BorderConds);
}


double SplineInterpolate::GetSplineFunction(double x_)
{
	double x = Section[0] + 2 * h;
	int i = 2;
	if (x_ >= (Section[1] - h))
	{
		i = n;
		x = Section[1];
	}
	else
		if (x_ <= (Section[0] + h))
		{
			i = 1;
			x = Section[0] + h;
		}
		else
			while ((x_ < x - h) || (x_ > x))
			{
				x += h;
				i++;
			}
	return (a[i] + b[i - 1] * (x_ - x) + c[i] * pow(x_ - x, 2) / 2 + d[i - 1] * pow(x_ - x, 3) / 6);
}


double SplineInterpolate::GetFirstSplineDerivative(double x_)
{
	double x = Section[0] + 2 * h;
	int i = 2;
	if (x_ >= (Section[1] - h))
	{
		i = n;
		x = Section[1];
	}
	else
		if (x_ <= (Section[0] + h))
		{
			i = 1;
			x = Section[0] + h;
		}
		else
			while ((x_ < x - h) || (x_ > x))
			{
				x += h;
				i++;
			}
	return (b[i - 1] + c[i] * (x_ - x) + d[i - 1] * pow(x_ - x, 2) / 2);
}


double SplineInterpolate::GetSecondSplineDerivative(double x_)
{
	double x = Section[0] + 2 * h;
	int i = 2;
	if (x_ >= (Section[1] - h))
	{
		i = n;
		x = Section[1];
	}
	else
		if (x_ <= (Section[0] + h))
		{
			i = 1;
			x = Section[0] + h;
		}
		else
			while ((x_ < x - h) || (x_ > x))
			{
				x += h;
				i++;
			}
	return (c[i] + d[i - 1] * (x_ - x));
}

//функции
double SplineInterpolate::GetValueFunction(double x_)
{
	double res;
	switch (TaskNumber)
	{
	case 1:
		if (x_ < 0)
			res = pow(x_, 3) + 3 * pow(x_, 2);
		else
			res = -pow(x_, 3) + 3 * pow(x_, 2);
		break;
	case 2:
		res = sin(x_ + 1) / x_;
		break;
	case 3:
		res = res = sin(x_ + 1) / x_ + cos(10 * x_);
		break;
	default:
		res = 0;
	}
	return res;
}

//первые произыодные
double SplineInterpolate::GetFirstDerivative(double x_)
{
	double res;
	switch (TaskNumber)
	{
	case 1:
		if (x_ < 0)
			res = 3 * pow(x_, 2) + 6 * x_;
		else
			res = -3 * pow(x_, 2) + 6 * x_;
		break;
	case 2:
		res = cos(x_ + 1) / x_ - sin(x_ + 1) / pow(x_, 2);
		break;
	case 3:
		res = cos(x_ + 1) / x_ - sin(x_ + 1) / pow(x_, 2) - 10 * sin(10 * x_);
		break;
	default:
		res = 0;
	}
	return res;
}

//вторые произодные
double SplineInterpolate::GetSecondDerivative(double x_)
{
	double res;
	switch (TaskNumber)
	{
	case 1:
		if (x_ < 0)
			res = 6 * x_ + 6;
		else
			res = -6 * x_ + 6;
		break;
	case 2:
		res = (-sin(1 + x_) - 2 * cos(1 + x_) / x_ + 2 * sin(1 + x_) / pow(x_,2)) / x_;
		break;
	case 3:
		res = (-sin(1 + x_) - 2 * cos(1 + x_) / x_ + 2 * sin(1 + x_) / pow(x_, 2)) / x_ - 100 * cos(10 * x_);
		break;
	default:
		res = 0;
	}
	return res;
}


void SplineInterpolate::Run(vector<double> BorderConds)
{
	double temp1, temp2;
	vector<double> alpha(n), beta(n);
	alpha[0] = 0;
	beta[0] = BorderConds[0];
	for (int i = 1; i < n; i++)
	{
		temp1 = (-4 - alpha[i - 1]) * h;
		temp2 = -(a[i + 1] - 2 * a[i] + a[i - 1]) * 6 / h;
		alpha[i] = h / temp1;
		beta[i] = (temp2 + beta[i - 1] * h) / temp1;
	}
	c[n] = BorderConds[1];
	for (int i = n - 1; i >= 0; i--)
		c[i] = alpha[i] * c[i + 1] + beta[i];

	for (int i = 1; i <= n; i++)
	{
		d[i - 1] = (c[i] - c[i - 1]) / h;
		b[i - 1] = (a[i] - a[i - 1]) / h + c[i] * h / 3 + c[i - 1] * h / 6;
	}
}


vector<double> SplineInterpolate::Comparison()
{
	vector<double> S, S1, S2;
	vector<double> F, F1, F2;

	double k = (Section[1] - Section[0]) / (2 * n);
	if (k > 0.005)
		k = 0.005;
	int N = (Section[1] - Section[0]) / k;

	S = vector<double>(N + 1);
	S1 = vector<double>(N + 1);
	S2 = vector<double>(N + 1);
	F = vector<double>(N + 1);
	F1 = vector<double>(N + 1);
	F2 = vector<double>(N + 1);

	//По вспомогательной сетке
	double x_ = Section[0];
	//По основной сетке
	double x = Section[0] + h;
	double sup;
	//Шаг на вспомогательной сетке
	//double k = (Section[1] - Section[0]) / N;

	//Заполнение сплайна и его производных
	//Версия с постоянным шагом
	for (int t = 0; t < 1; t++)
	{
		int i = 1;
		for (int j = 0; j <= N; j++)
		{
			S[j] = a[i] + b[i - 1] * (x_ - x) + c[i] * pow((x_ - x), 2) / 2 + d[i - 1] * pow((x_ - x), 3) / 6;
			S1[j] = b[i - 1] + c[i] * (x_ - x) + d[i - 1] * pow(x_ - x, 2) / 2;
			S2[j] = c[i] + d[i - 1] * (x_ - x);
			x_ += k;
			if ((x_ - x) > pow(10, -10))
			{
				i++;
				x += h;
			}
		}
		//S[N] = x;
	}

	int ix = 0;
	//Вектор для погрешностей и точек, где погрешность максимальная
	//0 - 2 - для погрешностей, 3- 5 - для точек
	vector<double> error(6);

	x = Section[0];
	//Вычисление функции
	for (int i = 0; i <= N; i++)
	{
		F[i] = GetValueFunction(x);
		sup = fabs(F[i] - S[i]);
		if (sup > error[0])
		{
			error[0] = sup;
			ix = i;
		}
		x += k;
	}
	error[3] = Section[0] + k * ix;
	//---
	//Вычисление первой производной
	//---
	ix = 0;
	x = Section[0];
	for (int i = 0; i <= N; i++)
	{
		F1[i] = GetFirstDerivative(x);
		sup = fabs(S1[i] - F1[i]);
		if (sup > error[1])
		{
			error[1] = sup;
			ix = i;
		}
		x += k;
	}
	error[4] = Section[0] + k * ix;
	//---
	//Вычисление второй производной
	//---
	ix = 0;
	x = Section[0];
	for (int i = 0; i <= N; i++)
	{
		F2[i] = GetSecondDerivative(x);
		sup = fabs(S2[i] - F2[i]);
		if (sup > error[2])
		{
			error[2] = sup;
			ix = i;
		}
		x += k;
	}
	error[5] = Section[0] + k * ix;
	//---

	//Вывод данных в файлы
	ofstream file("Spline.txt");

	x = Section[0];
	for (int i = 0; i <= N; i++)
	{
		file << x << " " << S[i] << endl;
		x += k;
	}
	file.close();

	file.open("Spline1.txt");
	x = Section[0];
	for (int i = 0; i <= N; i++)
	{
		file << x << " " << S1[i] << endl;
		x += k;
	}
	file.close();

	file.open("Spline2.txt");
	x = Section[0];
	for (int i = 0; i <= N; i++)
	{
		file << x << " " << S2[i] << endl;
		x += k;
	}
	file.close();

	file.open("Function.txt");
	x = Section[0];
	for (int i = 0; i <= N; i++)
	{
		file << x << " " << F[i] << endl;
		x += k;
	}
	file.close();

	file.open("Function1.txt");
	x = Section[0];
	for (int i = 0; i <= N; i++)
	{
		file << x << " " << F1[i] << endl;
		x += k;
	}
	file.close();

	file.open("Function2.txt");
	x = Section[0];
	for (int i = 0; i <= N; i++)
	{
		file << x << " " << F2[i] << endl;
		x += k;
	}
	file.close();

	return error;
}

