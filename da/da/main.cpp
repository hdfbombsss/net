#include <iostream>
#include "C:\Users\peshk\Desktop\ggg\datelibrary1\datelibrary1\Header.h"

int main() {
	setlocale(0, "");
	int day1 = 1, month1 = 1, year1 = 2024;
	int day2 = 31, month2 = 12, year2 = 2023;

	std::cout << "������� ����� ������: "
		<< DateDifference(day1, month1, year1, day2, month2, year2) << " ����\n";

	std::cout << "2024 - ���������� ���? " << (IsLeapYear(2024) ? "��" : "���") << '\n';

	return 0;
}