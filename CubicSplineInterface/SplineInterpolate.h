#pragma once

#ifndef SPLINEINTERPOLATE_H
#define SPLINEINTERPOLATE_H

#include <vector>
#include <string>
#include <fstream>

using namespace std;

class SplineInterpolate
{
private:
	int n; //Количество участков основной сетки
	int TaskNumber; //Номер функции
	double h; //Шаг на основной сетке
	vector<double> a, b, c, d; //Коэффициенты сплайна
	vector<double> Section; //Отрезок
public:
	SplineInterpolate();
	SplineInterpolate(int n_, int TN, vector<double> Section_, vector<double> BorderConds);
	double GetSplineFunction(double x_); //Вычисляет значение сплайна в точке
	double GetFirstSplineDerivative(double x_); //Вычисляет значение первой производной сплайна в точке
	double GetSecondSplineDerivative(double x_); //Вычисляет значение второй производной сплайна в точке
	double GetValueFunction(double x_); //Вычисляет значение функции в точке
	double GetFirstDerivative(double x_); //Вычисляет значение первой производной функции в точке
	double GetSecondDerivative(double x_); //Вычисляет значение второй производной функции в точке
	void Run(vector<double> BorderConds); //Прогонка и нахождение остальных коэффициентов
	vector<double> Comparison(); //Вычисляет всё и сохраняет всё

	int GetGridDimension() { return n; }
	vector<double> GetSection() { return Section; }
	vector<double> GetAOdds() { return a; }
	vector<double> GetBOdds() { return b; }
	vector<double> GetCOdds() { return c; }
	vector<double> GetDOdds() { return d; }
};

#endif