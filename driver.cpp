#include <iostream>
#include <conio.h>
#include "driver.h"
// ����������� �� ���������
driver::driver()
{
	name = "";
	surname = "";
	phone_number = "";
}
// �����������
driver::driver(std::string name, std::string surname, std::string phone_number)
{
	this->name = name;
	this->surname = surname;
	this->phone_number = phone_number;
}
// ����������
driver::~driver()
{
}
// ��������� �����
void driver::set_name(std::string name)
{
	this->name = name;
}
// ��������� �����
std::string driver::get_name()
{
	return std::string(name);
}
// ��������� �������
void driver::set_surname(std::string surname)
{
	this->surname = surname;
}
// ��������� �������
std::string driver::get_surname()
{
	return std::string(surname);
}
// ��������� ������ ��������
void driver::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
}
// ��������� ������ ��������
std::string driver::get_phone_number()
{
	return std::string(phone_number);
}
// ���� ���������� � ��������
void driver::input_driver()
{
	std::cout << "������� ��� ��������: ";
	std::cin >> name;
	std::cout << "������� ������� ��������: ";
	std::cin >> surname;
	std::cout << "������� ����� �������� ��������: ";
	std::cin >> phone_number;
}
// ����� ���������� � ��������
void driver::print_driver()
{
	std::cout << "\n���������� � ��������" << std::endl;
	std::cout << "���: " << name << std::endl;
	std::cout << "�������: " << surname << std::endl;
	std::cout << "����� ��������: " << phone_number << std::endl;
}