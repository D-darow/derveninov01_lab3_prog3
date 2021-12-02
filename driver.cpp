#include <iostream>
#include <conio.h>
#include "driver.h"
// Конструктор по умолчанию
driver::driver()
{
	name = "";
	surname = "";
	phone_number = "";
}
// Конструктор
driver::driver(std::string name_in, std::string surname_in, std::string phone_number_in)
{
	name = name_in;
	surname = surname_in;
	phone_number = phone_number_in;
}
// Деструктор
driver::~driver()
{
}
// Установка имени
void driver::set_name(std::string name_in)
{
	name = name_in;
}
// Получение имени
std::string driver::get_name()
{
	return std::string(name);
}
// Установка фамилии
void driver::set_surname(std::string surname_in)
{
	surname = surname_in;
}
// Получение фамилии
std::string driver::get_surname()
{
	return std::string(surname);
}
// Установка номера телефона
void driver::set_phone_number(std::string phone_number_in)
{
	phone_number = phone_number_in;
}
// Получение номера телефона
std::string driver::get_phone_number()
{
	return std::string(phone_number);
}
// Ввод информации о водителе
void driver::input_driver()
{
	std::cout << "Введите имя водителя: ";
	std::cin >> name;
	std::cout << "Введите фамилию водителя: ";
	std::cin >> surname;
	std::cout << "Введите номер телефона водителя: ";
	std::cin >> phone_number;
}
// Вывод информации о водителе
void driver::print_driver()
{
	std::cout << "\nИнформация о водителе" << std::endl;
	std::cout << "Имя: " << name << std::endl;
	std::cout << "Фамилия: " << surname << std::endl;
	std::cout << "Номер телефона: " << phone_number << std::endl;
}