#pragma once
#include <string>

class driver
{
private:
	std::string name; // ���
	std::string surname; // �������
	std::string phone_number; // ����� ��������
public:
	void set_name(std::string name_in); // ��������� �����
	std::string get_name(); // ��������� �����
	void set_surname(std::string surname_in); // ��������� �������
	std::string get_surname(); // ��������� �������
	void set_phone_number(std::string phone_number_in); // ��������� ������ ��������
	std::string get_phone_number(); // ��������� ������ ��������
	void input_driver(driver& object); // ���� ���������� � ��������
	void print_driver(driver object); // ����� ���������� � ��������
};