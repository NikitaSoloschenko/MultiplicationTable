#include <iostream>
#include "conio.h"
#include "windows.h"
int main() 
{
	setlocale(LC_ALL, "rus");
	std::cout << "Таблица Умножения!\n\n";
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			int number = i * j;
			if(number % 2 == 0)
			{
				SetConsoleTextAttribute(hConsole, 12);
				std::cout << "\t" << i * j;
			}
			else
			{
				SetConsoleTextAttribute(hConsole, 10);
				std::cout << "\t" << i * j;
			}
		}
		std::cout << "\n\n\n";
	}
	_getch();
	return 0;
}