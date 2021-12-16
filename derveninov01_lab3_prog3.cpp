#include <iostream>
#include <Windows.h>
#include "bus.h"
#include "engine.h"

int bus::total_sum = 0;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bus my_bus = bus(23, 0, 25, 1, 1, 8, 30, 40, "asds", "asd", "12345");
	my_bus.add_passenger();
	try
	{
		int check = my_bus.remove_passenger();
		if (check == -1) throw - 1;
	}
	catch (int a)
	{
		std::cout << "Автобус пуст." << std::endl;
	}
	try
	{
		int check = my_bus.remove_passenger();
		if (check == -1) throw -1;
	}
	catch (int a)
	{
		std::cout << "\nАвтобус пуст." << std::endl;
	}
}