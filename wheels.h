#pragma once
class wheels
{
private:
	int diameter_of_disk; // ������� ������ (� ������)
	int width_of_tire; // ������ ���� (� ��)
public:
	void set_diametr_of_disk(int diametr); // ��������� �������� ������
	int get_diametr_of_disk(); // ��������� �������� ������
	void set_width_of_tire(int width); // ��������� ������ ����
	int get_width_of_tire(); // ��������� ������ ����
	wheels(int diametr, int width); // �����������
	~wheels(); // ����������
	void input_wheels(wheels& object); // ���� ���������� � �������
	void print_wheels(wheels object); // ����� ���������� � �������
};

