#include <windows.h>

#include <iostream>
#include <string>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "RU");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::string name;
	
	std::cout << "������� ���: ";
	std::getline(std::cin, name);
	std::cout << "������������, " << name << "!\n";
	system("pause");
	return 0;
}