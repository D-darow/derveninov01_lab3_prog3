#include <iostream>
#include "foreign_driver.h"
// Конструктор
foreign_driver::foreign_driver(std::string name, std::string surname, std::string phone_number, long RPV_id) :
	driver(name, surname, phone_number)
{
	this->RPV_id = RPV_id;
}
// Вывод информации о водителе
void foreign_driver::print_driver()
{
	driver::print_driver();
	std::cout << "Номер разрешения на временное проживание: " << RPV_id << std::endl;
}
// Перегрузка оператора =
foreign_driver foreign_driver::operator=(driver d)
{
	name = d.get_name();
	surname = d.get_surname();
	phone_number = d.get_phone_number();
	return * this;
}
// Перегрузка оператора <<
std::ostream& operator<<(std::ostream& out, const foreign_driver& driver) 
{
	out << "\nИнформация о водителе\n" << "Имя: " << driver.name 
		<< "\nФамилия: " << driver.surname << "\nНомер телефона: " 
		<< driver.phone_number << "\nНомер разрешения на временное проживание: " 
		<< driver.RPV_id << std::endl;
	return out;
}