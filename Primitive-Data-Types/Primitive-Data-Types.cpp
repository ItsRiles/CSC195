// Primitive-Data-Types.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    string name;
    string initial;
    unsigned short age;
    bool isAdult;
    unsigned int zipcode;
    float wage;
    unsigned short daysWorked;
    unsigned short hoursWorkedPerDay[7];
    float TAX = .1f;
    int totalHours = 0;
    float grossIncome;
    float netIncome;


    cout << "Enter first name: ";
    cin >> name;
    cout << "Enter last initial: ";
    cin >> initial;
    cout << "Enter age: ";
    cin >> age;
    if (age >= 18) {
        isAdult = true;
    }
    else {
        isAdult = false;
    }
    cout << "Enter zipcode: ";
    cin >> zipcode;
    cout << "Enter wage: ";
    cin >> wage;
    cout << "Enter days worked this week: ";
    cin >> daysWorked;

    for (int i = 0; i < daysWorked; i++) {
        cout << "enter hours for day " << i+1 << ": ";
        cin >> hoursWorkedPerDay[i];
    }

    for (int i = daysWorked; i < 7; i++) {
        hoursWorkedPerDay[i] = 0;
    }

    for (int x : hoursWorkedPerDay) {
        totalHours = totalHours + x;
    }

    grossIncome = totalHours * wage;
    netIncome = grossIncome - (grossIncome * TAX);

    cout << name << " worked " << totalHours << " hours at $" << wage << " an hour.\n";
    cout << "Gross Income: $" << grossIncome << endl;
    cout << "Net Income: $" << ceilf(netIncome * 100) / 100 << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
