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
	int n; //���������� �������� �������� �����
	int TaskNumber; //����� �������
	double h; //��� �� �������� �����
	vector<double> a, b, c, d; //������������ �������
	vector<double> Section; //�������
public:
	SplineInterpolate();
	SplineInterpolate(int n_, int TN, vector<double> Section_, vector<double> BorderConds);
	double GetSplineFunction(double x_); //��������� �������� ������� � �����
	double GetFirstSplineDerivative(double x_); //��������� �������� ������ ����������� ������� � �����
	double GetSecondSplineDerivative(double x_); //��������� �������� ������ ����������� ������� � �����
	double GetValueFunction(double x_); //��������� �������� ������� � �����
	double GetFirstDerivative(double x_); //��������� �������� ������ ����������� ������� � �����
	double GetSecondDerivative(double x_); //��������� �������� ������ ����������� ������� � �����
	void Run(vector<double> BorderConds); //�������� � ���������� ��������� �������������
	vector<double> Comparison(); //��������� �� � ��������� ��

	int GetGridDimension() { return n; }
	vector<double> GetSection() { return Section; }
	vector<double> GetAOdds() { return a; }
	vector<double> GetBOdds() { return b; }
	vector<double> GetCOdds() { return c; }
	vector<double> GetDOdds() { return d; }
};

#endif