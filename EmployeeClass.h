// Description: Assignment 7 - Exception
// Author: Katherine-Marie Gonzales
// COMSC200 - 5001
// April 1, 2019
// Status: Complete

//EmployeeClass.h

#ifndef EMPCLASS_H
#define EMPCLASS_H
#include <iostream>
#include <string>

using namespace std;

class Employee
{
    private: 
        string employeeName;
        int employeeNumber;
        string hireDate;
        
    public:
        class InvalidEmployeeNumber
        {};
        
        Employee()
        {
            employeeName = "";
            employeeNumber = 0;
            hireDate = "";
        }
        
        Employee(string name, int number, string hire)
        {
            employeeName = name;
            employeeNumber = number;
            hireDate = hire;
        }
        
        void setName(string name)
        {employeeName = name;}
        
        void setNumber(int number)
        {employeeNumber = number;}
        
        void setDate(int date)
        {hireDate = date;}
        
        string getName()
        {return employeeName;}
        
        int getNumber() const
        {return employeeNumber;}
        
        string getDate() const
        {return hireDate;}
};

#endif