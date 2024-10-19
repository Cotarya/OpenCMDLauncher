#include <iostream>

int main() {
	//Ставим русский язык
	setlocale(LC_ALL, "RU");
	//int это переменные простого типа
	int password = 82941;
	// std::cout написать текст
	std::cout << "Проверка доступа" << std::endl;
	std::cout << "Если пишет 82941 значит ошибка" << std::endl ;
	//Здесь пока что всё время при запуске ошибка потом сделаю условие
	//Меняем чтобы не было ошибки каждый запуск
	//char здесь пока что не нужен но нужен будет bool
	bool isValid = false;
	password = 0;
	std::cout << "Введите код ";
	std::cin >> password;
	std::cout << "Считаем" << std::endl;
	std::cout << "Дешифрование" << std::endl ;
	if (password == 123 ) {
		std::cout << "Ожидайте установки значения bool" << std::endl;
		isValid = true;
	}
	else {
		std::cout << "Не правильно перезапускайте проверку НЕ ВСЕГДА ОШИБКА" << std::endl;
		isValid = false;
	}
	if (isValid = true) {
		std::cout << "Проверка пройдена ожидайте открытие или разблокировку доступа к чему либо Внимание этот лаунчер универсальный" << std::endl;
	}
	else {
		std::cout << "Ошибка не правильно перезапускайте лаунчер";
	}
	return 0;
}
