#include <iostream>
#include <Windows.h>

int main() {
	setlocale(LC_ALL, "ru");
	std::string name;

	while (true) {
		std::cout << "������� ���: ";

		SetConsoleCP(1251);
		std::cin >> name;
		SetConsoleCP(866);

		std::cout << "������������, " << name << "!\n" << std::endl;
		system("pause > nul");
	}

	return 0;
}