#pragma once
class wheels
{
private:
	int diameter_of_disk; // ������� ������ (� ������)
	int width_of_tire; // ������ ���� (� ��)
public:
	void set_diametr_of_disk(int diametr_of_disk); // ��������� �������� ������
	int get_diametr_of_disk(); // ��������� �������� ������
	void set_width_of_tire(int width_of_tire); // ��������� ������ ����
	int get_width_of_tire(); // ��������� ������ ����
	wheels(); // ����������� �� ���������
	wheels(int diametr_of_disk, int width_of_tire); // �����������
	~wheels(); // ����������
	void input_wheels(); // ���� ���������� � �������
	void print_wheels(); // ����� ���������� � �������
};

