#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "driver.h"
// �����������
driver::driver(std::string name_in, std::string surname_in, std::string phone_number_in)
{
	name = name_in;
	surname = surname_in;
	phone_number = phone_number_in;
}
// ����������
driver::~driver()
{
}
// ��������� �����
void driver::set_name(std::string name_in)
{
	name = name_in;
}
// ��������� �����
std::string driver::get_name()
{
	return std::string(name);
}
// ��������� �������
void driver::set_surname(std::string surname_in)
{
	surname = surname_in;
}
// ��������� �������
std::string driver::get_surname()
{
	return std::string(surname);
}
// ��������� ������ ��������
void driver::set_phone_number(std::string phone_number_in)
{
	phone_number = phone_number_in;
}
// ��������� ������ ��������
std::string driver::get_phone_number()
{
	return std::string(phone_number);
}
// ���� ���������� � ��������
void driver::input_driver(driver& object)
{
	std::cout << "������� ��� ��������: ";
	std::cin >> name;
	std::cout << "������� ������� ��������: ";
	std::cin >> surname;
	std::cout << "������� ����� �������� ��������: ";
	std::cin >> phone_number;
}
// ����� ���������� � ��������
void driver::print_driver(driver object)
{
	printf("\n���������� � ��������\n");
	printf("���: %s\n", object.name);
	printf("�������: %s\n", object.surname);
	printf("����� ��������: %s\n\n", object.phone_number);
	printf("������� ����� �������, ����� ��������� � ����...");
	_getch();
}