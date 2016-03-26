#include <cstdlib>
#include <iostream>
#include "MyClass.h"
using namespace std;

int main()
{
	int z, x, h;
	cout << "¬ведите первую сторону треугольника a = ";
	cin >> z;
	cout << "¬ведите вторую сторону треугольника b = ";
	cin >> x;
	cout << "¬ведите третью сторону треугольника с = ";
	cin >> h;
	MyClass obj;
	obj.setDate(z, x, h);
	cout << "ѕериметр треугольника = " << obj.sum() << endl;

	system("pause");
	return 0;
}