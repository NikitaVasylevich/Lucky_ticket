#include <iostream>
#include <cstring>
using namespace std;
void main()
{
string n;
	setlocale(LC_ALL, "Russian");
	cout << "������� 6-�� ������� ����� ������: \n"; cin >> n;
	if (n.size() == 6)
		if ((n[0] + n[1] + n[2]) == (n[3] + n[4] + n[5]))
			cout << "����� ���������� !\n";
		else cout << "� ��� ������� �����\n";
	else cout << "�� ����� �� 6-�� ������� �����";
}