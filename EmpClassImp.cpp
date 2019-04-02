//implementation file for Employee Class
// Description: Assignment 7 - Exception
// Author: Katherine-Marie Gonzales
// COMSC200 - 5001
// April 1, 2019
// Status: Complete

//EmployeeClassImp.cpp

#include "EmployeeClass.h"
#include "ProductionWorker.h"

void EmployeeClass::setNumber(int n)
{
    if (n >= 0 && n <= 9999)
        employeeNumber = n;
    else
        throw InvalidEmployeeNumber();
}

void ProductionWorker::