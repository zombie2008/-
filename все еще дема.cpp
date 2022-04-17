#include <iostream>
#include <windows.h>


using namespace std;
void spravka() {
	cout << "ИНСТРУКЦИЯ К ИГРЕ" << endl;
	cout << "Правила игры очень просты. Вы ведь играли в игру под названием морской бой?" << endl;
	cout << "Если нет - не беда. С начала игры нам дается игровое поле, на котором в случайном порядке расположены мины." << endl;
	cout << "Твоя задача заключается в том, чтобы наступить на каждый шаг в этом поле, не наступив ни разу на мину." << endl;
}
void razrab() {
	cout << "Игру написал Дмитрий Березко. Шучу." << endl;
	cout << "Разработчик: Скуратовский Е.В." << endl;
	cout << "Наставники: Шарова В.В. и Тыбербай С.Г." << endl;
}
void game() {
	int z;
	cout << "Выберите режим игры:" << endl;
	cin >> z;
	if (z == 1)
	{
		cout << "Вы выбрали легкий режим" << endl;
	}
	if (z == 2)
	{
		cout << "Вы выбрали средний режим" << endl;
	}
	if (z == 3)
	{
		cout << "А вы не промах. Вы выбрали сложный режим" << endl;
	}
	if (z == 4 && z == 0)
	{
		cout << "Такого у нас, к сожалению, пока нет" << endl;
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
						cout << "Вы уже были в этой области!";
						count--;
						
					}
				}
				if (a * b > (x + 1) * (y + 1)) {
					cout << "///";
					
				}
				else {
					if (a % 2 == 0 && b < y + 1) {
						cout << "Неудача. Ты взорвался";
						
					}
					else count++;
					if (count == 6) {
						cout << "А ты хорош. Все до единой обошел";
						
					}
				}

			}
			else cout << "У нас не настолько большая разметка сука";
		}
	}
}


int main() {

	int input;
	setlocale(LC_ALL, "Russian");
	cout << "Добро пожаловать на игру в сапера!" << endl;
	cout << "Главное меню" << endl;
	cout << "Куда отправимся?" << endl;
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

