// Project1.cpp: определяет экспортированные функции для приложения DLL.
//

#include "header.h"

#include <stdexcept>

using namespace std;

namespace MathOperation
{
	double MyOperations::Plus(double a, double b)
	{
		return a + b;
	}
	double MyOperations::Razn(double a, double b)
	{
		return a - b;
	}

	void LR6::fact(double &x, double &b, double &a, int &n)
	{
		b = x / (n + 1);
		a = a * b;
		n++;
	}
}