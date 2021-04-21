#include "Employee.h"
#include <iostream>

using namespace std;

const float Employee::TAX = 0.1f;

void Employee::Read()
{
	cout << "Enter first name: ";
	cin >> name;
	cout << "Enter age: ";
	cin >> age;
	cout << "Enter zipcode: ";
	cin >> zipcode;
	cout << "Enter wage: ";
	cin >> wage;
	cout << "Enter days worked this week: ";
	cin >> daysWorked;

	for (int i = 0; i < daysWorked; i++) {
		cout << "enter hours for day " << i + 1 << ": ";
		cin >> hoursWorkedPerDay[i];
	}

	for (int i = daysWorked; i < 7; i++) {
		hoursWorkedPerDay[i] = 0;
	}

	for (int x : hoursWorkedPerDay) {
		totalHours += x;
	}

	grossIncome = totalHours * wage;
	netIncome = grossIncome - (grossIncome * TAX);
}

void Employee::Write()
{
	cout << name << " worked " << totalHours << " hours at $" << wage << " an hour.\n";
	cout << "Gross Income: $" << grossIncome << endl;
	cout << "Net Income: $" << ceilf(netIncome * 100) / 100 << endl;
}