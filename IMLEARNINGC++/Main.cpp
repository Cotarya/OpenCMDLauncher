#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	//Таймер перед запуском
	int R = 0;
	while (R > 100) {
		cout << "До запуска " << R;
		R++;
	}
	//Ставим русский язык
	setlocale(LC_ALL, "RU");
	//int это переменные простого типа
	int password[2];
	// std::cout написать текст
	cout << "Проверка доступа" << std::endl;
	cout << "Если пишет 82941 значит ошибка" << std::endl;
	//Здесь пока что всё время при запуске ошибка потом сделаю условие
	//Меняем чтобы не было ошибки каждый запуск
	//char здесь пока что не нужен но нужен будет bool
	bool isValid = false;
	password[0] = 0;
	cout << "Введите код ";
	cin >> password[0];
	cout << "Считаем" << std::endl;
	if (password[0] == 123) {
		cout << "Ожидайте установки значения bool" << std::endl;
		isValid = true;
	}
	else {
		cout << "Не правильно перезапускайте проверку " << std::endl;
		isValid = false;
	}
	if (isValid == true) {
		cout << "Проверка пройдена ожидайте открытие или разблокировку доступа к чему либо Внимание этот лаунчер универсальный" << std::endl;
		password[1] = 523;
		system("Start C:\\CotaryaLauncherTest\\");
		//523 это значит успешно
	}
	else {
		cout << "Ошибка не правильно перезапускайте лаунчер";
		password[1] = 82941;
	}
	return password[1];
}
