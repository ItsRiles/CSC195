#pragma once
using namespace std;

class Employee
{
public:
	void Read();
	void Write();
private:
	char name[32];
	int age;
	int zipcode;
	float wage;
	int daysWorked;
	int hoursWorkedPerDay[7];
	static const float TAX;
	int totalHours = 0;
	float grossIncome;
	float netIncome;
};