// Lab 3_3.cpp
// Танечник Марічки
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції
// Варіант 20

#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	double x;
	double R;
	double y;

	cout << "R = "; cin >> R; cout << endl;
	cout << "x = "; cin >> x; cout << endl;


	if (x <= 0)
		y = 1-(1.0 / 2) * (x + 2);
	else
		if (0 < x && x <= R)
			y = R - sqrt(R * R - x * x);
		else
			if (R < x && x <= 2 * R)
				y = sqrt(R * R - (x - R) * (x - R));
			else
				y = -1.0 / (6 - 2 * R) * (x - 2 * R);
	cout << endl;
	cout << "y = " << y << endl;

	system("pause");
	return 0;

}