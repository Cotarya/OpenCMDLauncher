#include <iostream>

int main() {
	//������ ������� ����
	setlocale(LC_ALL, "RU");
	//int ��� ���������� �������� ����
	int password = 82941;
	// std::cout �������� �����
	std::cout << "�������� �������" << std::endl;
	std::cout << "���� ����� 82941 ������ ������" << std::endl ;
	//����� ���� ��� �� ����� ��� ������� ������ ����� ������ �������
	//������ ����� �� ���� ������ ������ ������
	//char ����� ���� ��� �� ����� �� ����� ����� bool
	bool isValid = false;
	password = 0;
	std::cout << "������� ��� ";
	std::cin >> password;
	std::cout << "�������" << std::endl;
	std::cout << "Debug PWORD " << password << std::endl ;
	if (password == 123 ) {
		std::cout << "�������� ��������� �������� bool";
		isValid = true;
	}
	else {
		std::cout << "�� ��������� �������������� ��������";
		isValid = false;
	}
	std::cout << "�������� �������� �������� �������� ��� ������������� ������� � ���� ���� �������� ���� ������� �������������" << std::endl;

	return 0;
}