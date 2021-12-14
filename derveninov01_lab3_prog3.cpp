#include <iostream>
#include <Windows.h>
#include "bus.h"
#include "engine.h"

int bus::total_sum = 0;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bus my_bus1 = bus(1, 0, 25);
	bus my_bus2 = bus(2, 0, 20);
	my_bus1.add_passenger();
	my_bus2.add_passenger();
	std::cout << "Общая сумма заработанных денег = " << bus::get_total_sum() << std::endl;
}