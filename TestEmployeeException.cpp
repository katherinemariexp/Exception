// Description: Assignment 7 - Exception
// Author: Katherine-Marie Gonzales
// COMSC200 - 5001
// April 1, 2019
// Status: Complete

//EmployeeClass.cpp

#include <iostream>
#include "EmployeeClass.h"
#include "ProductionWorker.h"

using namespace std;

int main()
{
    ProductionWorker worker("Nick", 5304, "March 02, 2019", 1, 27.00);
    
    cout << "Employee name: " << worker.getName() << endl;
    cout << "Employee number: " << worker.getNumber() << endl;
    cout << "Employee's hire date: " << worker.getDate() << endl;
    cout << "Employee's shift: ";
    cout << worker.getShift() << endl;
    cout << "Employee's hourly pay rate: " << worker.getHourlyPay() << endl;
    
    return 0;
}