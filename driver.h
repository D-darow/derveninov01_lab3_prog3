#pragma once
#include <string>

class driver
{
private:
	std::string name; // Имя
	std::string surname; // Фамилия
	std::string phone_number; // Номер телефона
public:
	driver(); // Конструктор по умолчанию
	driver(std::string name, std::string surname, std::string phone_number); // Конструктор
	~driver(); // Деструктор
	void set_name(std::string name); // Установка имени
	std::string get_name(); // Получение имени
	void set_surname(std::string surname); // Установка фамилии
	std::string get_surname(); // Получение фамилии
	void set_phone_number(std::string phone_number); // Установка номера телефона
	std::string get_phone_number(); // Получение номера телефона
	void input_driver(); // Ввод информации о водителе
	void print_driver(); // Вывод информации о водителе
};