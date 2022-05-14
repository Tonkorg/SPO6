#include <iostream>
#include "MathLibrary.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	string pt1 = " Меня ";
	string pt2 = " зовут";
	string pt3 = " Грут! ";

	string str = Concat(pt1, pt2, pt3);
	cout << "Полученная строка " << str << endl;

	int x1 = 1, x2 = 2, x3 = 3;

	int res = Min(x1, x2, x3);

	cout << "Наименьшее число " << res << endl;

}