#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int  r;
	double pi = 3.14;
	float alpha;
	cout << "Введите радиус: ";
	cin >> r;	// ввод числа (радиуса)
	if (r < 0)	 // проверка на отрицательное число
	{
		cout << "Это отрицательное число!" << endl;
		return 0;
	}
	if (!cin)	 // проверка на ввод не числового значения
	{
		cout << "Это не число!" << endl;
		return 0;
	}
	cout << "Введите угол: ";
	cin >> alpha;	// ввод числа (угол)
	if (alpha < 0 || alpha > 360)	// проверка на отрицательное число
	{
		cout << "Введён неверный угол" << endl;
		return 0;
	}
	if (!cin)	// проверка на ввод не числового значения
	{
		cout << "Это не число!" << endl;
		return 0;
	}
	cout << "Длина окружности = " << 2 * pi * r << endl;
	cout << "Площадь окружности = " << pi * (r * r) << endl;
	float corner = alpha / 360;		// расчет необходимого значения для формулы площади кругового сектора
	cout << "Площадь кругового сектора = " << pi * (r * r) * corner;
	return 0;
}