#include <iostream>
#include <windows.h>


using namespace std;
void spravka() {
	cout << "���������� � ����" << endl;
	cout << "������� ���� ����� ������. �� ���� ������ � ���� ��� ��������� ������� ���?" << endl;
	cout << "���� ��� - �� ����. � ������ ���� ��� ������ ������� ����, �� ������� � ��������� ������� ����������� ����." << endl;
	cout << "���� ������ ����������� � ���, ����� ��������� �� ������ ��� � ���� ����, �� �������� �� ���� �� ����." << endl;
}
void razrab() {
	cout << "���� ������� ������� �������. ����." << endl;
	cout << "�����������: ������������ �.�." << endl;
	cout << "����������: ������ �.�. � �������� �.�." << endl;
}
void game() {
	int z;
	cout << "�������� ����� ����:" << endl;
	cin >> z;
	if (z == 1)
	{
		cout << "�� ������� ������ �����" << endl;
	}
	if (z == 2)
	{
		cout << "�� ������� ������� �����" << endl;
	}
	if (z == 3)
	{
		cout << "� �� �� ������. �� ������� ������� �����" << endl;
	}
	if (z == 4 && z == 0)
	{
		cout << "������ � ���, � ���������, ���� ���" << endl;
	}
	const int x = 5;
	const int y = 5;
	int field[x][y]{};
	for (int i = 0; i < x; i++) {
		cout << endl;
		for (int j = 0; j < y; j++) {
			field[i][j] = 0;
			cout << field[i][j] << " ";
			system("color 7C");
		}
	}
	cout << endl;
	int a, b, count = 0;
	int arr_value_a[6];
	int arr_value_b[6];
	int iter = 0;
	int prev_value = 0;
	for (int i = 1; i < x + 1; i++) {
		for (int j = 1; j < y + 1; j++) {
			cin >> a >> b;
			if (a < 4 && b < 4) {
				iter++;
				arr_value_a[iter] = a;
				arr_value_b[iter] = b;
				for (int g = 0; g < iter; g++) {
					if (arr_value_a[g] == a && arr_value_b[g] == b) {
						cout << "�� ��� ���� � ���� �������!";
						count--;
						
					}
				}
				if (a * b > (x + 1) * (y + 1)) {
					cout << "///";
					
				}
				else {
					if (a % 2 == 0 && b < y + 1) {
						cout << "�������. �� ���������";
						
					}
					else count++;
					if (count == 6) {
						cout << "� �� �����. ��� �� ������ ������";
						
					}
				}

			}
			else cout << "� ��� �� ��������� ������� �������� ����";
		}
	}
}


int main() {

	int input;
	setlocale(LC_ALL, "Russian");
	cout << "����� ���������� �� ���� � ������!" << endl;
	cout << "������� ����" << endl;
	cout << "���� ����������?" << endl;
	int v = 0;
	cin >> v;
	switch (v) {
	case 1:
		void game();
		break;
	case 2: 
		void spravka();
		break;
	case 3:
		void razrab();
		break;
	}

	return 0;
}

