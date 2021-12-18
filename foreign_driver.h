#pragma once
#include "driver.h"
class foreign_driver : public driver
{
protected:
	long int RPV_id; // ����� ���������� �� ��������� ����������
public:
	foreign_driver(std::string name, std::string surname, std::string phone_number, long RPV_id); // �����������
	void print_driver(); // ����� ���������� � ��������
	foreign_driver operator = (driver d); // ���������� ��������� =
	friend std::ostream& operator<<(std::ostream& out, const foreign_driver& driver);
};

