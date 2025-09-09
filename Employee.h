// Parent Class Employee
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
//Atributes
protected:
std::string name;
int id;
std::string type; // "Hourly" or "Salary"
// Methods
public:

// To Do: Constructors   done
Employee(const std::string& name, int id, const std::string& type, 
double payPerHour, double workedHours, double yearlyPayment);

virtual ~Employee() {}

// Virtual functions to calculate payment
virtual double calculatePay() const = 0;

 // To Do: Getters    done
std::string getType();
std::string getName();
int getID() const;
};

#endif

















































