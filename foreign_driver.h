#pragma once
#include "driver.h"
class foreign_driver : public driver
{
protected:
	long int RPV_id; // Номер разрешения на временное проживание
public:
	foreign_driver(std::string name, std::string surname, std::string phone_number, long RPV_id); // Конструктор
	void print_driver(); // Вывод информации о водителе
	foreign_driver operator = (driver d); // Перегрузка оператора =
	friend std::ostream& operator<<(std::ostream& out, const foreign_driver& driver);
};

