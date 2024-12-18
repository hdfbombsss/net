#include "Header.h"
#include <cmath> // ��� std::abs

// ����������� ����������� ����
bool IsLeapYear(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// ���������� ������� ����� ������
int DateDifference(int day1, int month1, int year1, int day2, int month2, int year2) {
	// ���������� ���������� ��� ����� ����������� ���������
	int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	// ��������� ���������� ���
	if (IsLeapYear(year1)) daysInMonth[1] = 29;
	if (IsLeapYear(year2)) daysInMonth[1] = 29;

	// ����������� ��� ���� � ����� ���������� ����
	int totalDays1 = year1 * 365 + day1;
	for (int i = 0; i < month1 - 1; ++i)
		totalDays1 += daysInMonth[i];

	int totalDays2 = year2 * 365 + day2;
	for (int i = 0; i < month2 - 1; ++i)
		totalDays2 += daysInMonth[i];

	// ���������� �������
	return std::abs(totalDays1 - totalDays2);
}