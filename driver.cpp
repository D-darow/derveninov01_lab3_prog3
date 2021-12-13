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
driver::driver(std::string name, std::string surname, std::string phone_number)
{
	this->name = name;
	this->surname = surname;
	this->phone_number = phone_number;
}
// Деструктор
driver::~driver()
{
}
// Установка имени
void driver::set_name(std::string name)
{
	this->name = name;
}
// Получение имени
std::string driver::get_name()
{
	return std::string(name);
}
// Установка фамилии
void driver::set_surname(std::string surname)
{
	this->surname = surname;
}
// Получение фамилии
std::string driver::get_surname()
{
	return std::string(surname);
}
// Установка номера телефона
void driver::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
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