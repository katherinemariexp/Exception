// Description: Assignment 7 - Exception
// Author: Katherine-Marie Gonzales
// COMSC200 - 5001
// April 1, 2019
// Status: Complete

//EmployeeClass.cpp

#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"
#include "EmployeeClass.h"

using namespace std;

// Function prototypes
ProductionWorker *createProductionWorker(
    string, string, string, int, double);

int main() {
    ProductionWorker *pwPtr = nullptr;
    
    // if your IDE does not support lambda, change it to a function
    auto display = [](ProductionWorker e) {
        cout << setprecision(2) << fixed << showpoint
            << "\nName: " << e.getName() 
            << "\nEmployee number: " << e.getNumber() 
            << "\nHire date: " << e.getHireDate() 
            << "\nShift: " << e.getShiftName() 
            << "\nShift number: " << e.getShiftNumber() 
            << "\nPay rate: " << e.getPayRate() << endl;
    };
    
    // A valid ProductionWorker
    pwPtr = createProductionWorker("John Jones", "123", "1/1/2006", 2, 18.00);
    if (pwPtr != nullptr) display(*pwPtr);
    
    // A ProductionWorker w/invalid employee number.
    pwPtr = createProductionWorker("John Jones", "99999", "1/1/2006", 2, 18.00);
    if (pwPtr != nullptr) display(*pwPtr);
    
    // a ProductionWorker w/invalid shift number.
    pwPtr = createProductionWorker("John Jones", "123", "1/1/2006", 0, 18.00);
    if (pwPtr != nullptr) display(*pwPtr);
    
    // a ProductionWorker w/invalid hourly pay rate.
    pwPtr = createProductionWorker("John Jones", "123", "1/1/2006", 2, -99);
    if (pwPtr != nullptr) display(*pwPtr);
    
    return 0;
}

// The createProductionWorker function construct 
// a ProductionWorker object and returns a pointer to it. 
// If any of the values passed as arguments are invalid, 
// a null pointer is returned. 
ProductionWorker *createProductionWorker(string name, 
   string number, string hireDate, int shift, double payRate)
{
	ProductionWorker *pwPtr = nullptr;
	try
	{
		// Create a ProductionWorker object.
		pwPtr = new ProductionWorker(name, number, hireDate,shift, payRate);
	}
	
	////////////////////////////////////////////////
	// To catch all exceptions that you have defined in the section below
	
	
	






    ///////////////////////////////////////////////
    
	catch (...) {// catch-all handler
		std::cout << "We caught an exception of an undetermined type\n";
	}

	return pwPtr;
}

