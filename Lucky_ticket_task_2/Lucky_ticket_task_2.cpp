#include <iostream>
#include <cstring>
using namespace std;
void main()
{
string n;
	setlocale(LC_ALL, "Russian");
	cout << "Введите 6-ти значный номер билета: \n"; cin >> n;
	if (n.size() == 6)
		if ((n[0] + n[1] + n[2]) == (n[3] + n[4] + n[5]))
			cout << "Билет счастливый !\n";
		else cout << "У Вас обычный билет\n";
	else cout << "Вы ввели не 6-ти значный номер";
}