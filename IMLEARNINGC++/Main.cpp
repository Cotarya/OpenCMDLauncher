#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	//Ставим русский язык
	setlocale(LC_ALL, "RU");
	//int это переменные простого типа
	int password[2];
	// std::cout написать текст
	cout << "Проверка доступа" << std::endl;
	//Здесь пока что всё время при запуске ошибка потом сделаю условие
	//Меняем чтобы не было ошибки каждый запуск
	password[0] = 0;
	cout << "Введите код ";
	cin >> password[0];
	cout << "Считаем" << std::endl;
	//Здесь находится оптимизированный код
	if (password[0 == 111]) {
		cout << "Успешная разблокировка. Запуск" << endl;
		password[1] = 523;
		system("Start C:\\CotaryaLauncherTest\\setup.exe");
		cout << "universal launcher";
	}
	else {
		cout << "Ошибка пароль не правильный";
			password[1] = 82941;
	}

	return password[1];
}
