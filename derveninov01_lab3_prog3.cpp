#include <iostream>
#include <Windows.h>
#include "bus.h"
#include "engine.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Создание динамического массива объектов класса bus
	bus* my_bus = static_cast<bus*>(operator new[](2 * sizeof(bus)));
	for (int i = 0; i < 2; ++i) { 
		new (my_bus + i) bus(23 + i, 0, 25);
	}
	// Инициализация объектов класса bus
	for (int i = 0; i < 2; ++i) {
		(my_bus + i)->init_bus();
		std::cout << std::endl;
	}
	// Вывод объектов класса bus
	for (int i = 0; i < 2; ++i) {
		int bus_num_print = (my_bus + i)->get_bus_num();
		std::cout << "Автобус номер " << bus_num_print << std::endl;
		(my_bus + i)->print_bus();
	}
	// Очистка памяти
	delete my_bus;
}