#pragma once
#include <string>

class driver
{
private:
	std::string name; // ���
	std::string surname; // �������
	std::string phone_number; // ����� ��������
public:
	driver(); // ����������� �� ���������
	driver(std::string name, std::string surname, std::string phone_number); // �����������
	~driver(); // ����������
	void set_name(std::string name); // ��������� �����
	std::string get_name(); // ��������� �����
	void set_surname(std::string surname); // ��������� �������
	std::string get_surname(); // ��������� �������
	void set_phone_number(std::string phone_number); // ��������� ������ ��������
	std::string get_phone_number(); // ��������� ������ ��������
	void input_driver(); // ���� ���������� � ��������
	void print_driver(); // ����� ���������� � ��������
};