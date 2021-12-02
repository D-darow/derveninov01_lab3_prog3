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
	driver(std::string name_in, std::string surname_in, std::string phone_number_in); // Конструктор
	~driver(); // Деструктор
	void set_name(std::string name_in); // Установка имени
	std::string get_name(); // Получение имени
	void set_surname(std::string surname_in); // Установка фамилии
	std::string get_surname(); // Получение фамилии
	void set_phone_number(std::string phone_number_in); // Установка номера телефона
	std::string get_phone_number(); // Получение номера телефона
	void input_driver(); // Ввод информации о водителе
	void print_driver(); // Вывод информации о водителе
};