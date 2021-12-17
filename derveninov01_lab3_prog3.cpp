#include <iostream>
#include <Windows.h>
#include "bus.h"
#include "engine.h"

int bus::total_sum = 0;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bus bus_arr[2][2];
	int bus_num = 1;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			bus_arr[i][j] = bus(bus_num);
			bus_num++;
		}
	}
	bus_arr[0][0].set_price(25);
	bus_arr[0][0].add_passenger();
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			bus_arr[i][j].print_bus();
		}
	}
}