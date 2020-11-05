// Lab_03_4.cpp
// < Сенишин Михайло >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 10

#include <iostream>
using namespace std;

int main()

{
	double x, y, R, a, b; // вхідний аргумент

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	// розгалуження в повній формі

	if ((x * x + y * y <= R * R && y <= 0 && y >= -b && x <= 0) ||
		(x * x + y * y >= R * R && y >= 0 && y <= b && x <= a))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}