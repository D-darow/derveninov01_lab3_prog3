#include <iostream>
#include <Windows.h>
#include "bus.h"
#include "engine.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bus my_bus1 = bus(1, 0, 25);
	my_bus1.add_passenger();
	int* sum_by_address = my_bus1.get_sum_by_address(); // Получение суммы через указатель
	int sum_by_link = my_bus1.get_sum_by_link(); // Получение суммы по ссылке
	std::cout << *sum_by_address << " = " << sum_by_link << std::endl << std::endl; // Вывод значений
	// Демонстрация постфиксной перегрузки инкремента
	bus my_bus2 = my_bus1++;
	int sum2 = my_bus2.get_sum_by_link();
	int sum1 = my_bus1.get_sum_by_link();
	std::cout << "Сумма 2 автобуса: " << sum2 << std::endl;
	std::cout << "Сумма 1 автобуса: " << sum1 << std::endl << std::endl;
	// Демонстрация префиксной перегрузки инкремента
	bus my_bus3 = ++my_bus1;
	int sum3 = my_bus3.get_sum_by_link();
	sum1 = my_bus1.get_sum_by_link();
	std::cout << "Сумма 3 автобуса: " << sum3 << std::endl;
	std::cout << "Сумма 1 автобуса: " << sum1 << std::endl << std::endl;
	// Демонстрация перегрузки оператора +
	int sum13 = my_bus1 + my_bus3;
	std::cout << "Сумма 3 автобуса + сумма 1 автобуса = " << sum13 << std::endl;
}