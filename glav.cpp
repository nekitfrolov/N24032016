#include <cstdlib>
#include <iostream>
#include "MyClass.h"
using namespace std;

int main()
{
	int z, x, h;
	cout << "������� ������ ������� ������������ a = ";
	cin >> z;
	cout << "������� ������ ������� ������������ b = ";
	cin >> x;
	cout << "������� ������ ������� ������������ � = ";
	cin >> h;
	MyClass obj;
	obj.setDate(z, x, h);
	cout << "�������� ������������ = " << obj.sum() << endl;

	system("pause");
	return 0;
}