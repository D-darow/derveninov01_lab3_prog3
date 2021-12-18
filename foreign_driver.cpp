#include <iostream>
#include "foreign_driver.h"
// �����������
foreign_driver::foreign_driver(std::string name, std::string surname, std::string phone_number, long RPV_id) :
	driver(name, surname, phone_number)
{
	this->RPV_id = RPV_id;
}
// ����� ���������� � ��������
void foreign_driver::print_driver()
{
	driver::print_driver();
	std::cout << "����� ���������� �� ��������� ����������: " << RPV_id << std::endl;
}
// ���������� ��������� =
foreign_driver foreign_driver::operator=(driver d)
{
	name = d.get_name();
	surname = d.get_surname();
	phone_number = d.get_phone_number();
	return * this;
}
// ���������� ��������� <<
std::ostream& operator<<(std::ostream& out, const foreign_driver& driver) 
{
	out << "\n���������� � ��������\n" << "���: " << driver.name 
		<< "\n�������: " << driver.surname << "\n����� ��������: " 
		<< driver.phone_number << "\n����� ���������� �� ��������� ����������: " 
		<< driver.RPV_id << std::endl;
	return out;
}