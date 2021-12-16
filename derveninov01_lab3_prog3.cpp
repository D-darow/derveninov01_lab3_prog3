#include <iostream>
#include <Windows.h>
#include "bus.h"
#include "engine.h"

int bus::total_sum = 0;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Cоздание динамического массива объектов класса bus
		bus * my_bus_dynamic = static_cast<bus*>(operator new[](2 * sizeof(bus)));
	for (int i = 0; i < 2; ++i) {
		new (my_bus_dynamic + i) bus(23 + i, 0, 25, 1, 1, 8, 30, 40, "asds", "asd", "12345");
	}
	// Вывод объектов динамического массива класса bus
	for (int i = 0; i < 2; ++i) {
		(my_bus_dynamic + i)->print_bus();
	}
	// Очистка памяти
	delete my_bus_dynamic;
	// Создание массива конструктором с одним параметром
	bus my_bus_static[2];
	my_bus_static[0] = bus(30);
	my_bus_static[1] = bus(40);
	// Вывод статического массива
	for (int i = 0; i < 2; ++i) {
		my_bus_static->print_bus();
	}
	// Копирование объекта
	bus my_bus_copy = bus(my_bus_static[0]);
	// Вывод копии
	my_bus_copy.print_bus();
}