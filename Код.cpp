#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int  r;
	double pi = 3.14;
	float alpha;
	cout << "¬ведите радиус: ";
	cin >> r;	// ввод числа (радиуса)
	if (r < 0)	 // проверка на отрицательное число
	{
		cout << "Ёто отрицательное число!" << endl;
		return 0;
	}
	if (!cin)	 // проверка на ввод не числового значени€
	{
		cout << "Ёто не число!" << endl;
		return 0;
	}
	cout << "¬ведите угол: ";
	cin >> alpha;	// ввод числа (угол)
	if (alpha < 0 || alpha > 360)	// проверка на отрицательное число и на ввод угла больше 360 градусов
	{
		cout << "¬ведЄн неверный угол" << endl;
		return 0;
	}
	if (!cin)	// проверка на ввод не числового значени€
	{
		cout << "Ёто не число!" << endl;
		return 0;
	}
	cout << "ƒлина окружности = " << 2 * pi * r << endl;
	cout << "ѕлощадь окружности = " << pi * (r * r) << endl;
	float corner = alpha / 360;		// расчет необходимого значени€ дл€ формулы площади кругового сектора
	cout << "ѕлощадь кругового сектора = " << pi * (r * r) * corner;
	return 0;
}