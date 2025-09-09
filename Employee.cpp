#include "Employee.h"
#include <string>

using namespace std;

Employee::Employee(const std::string& name, int id, const std::string& type, 
    double payPerHour, double workedHours, double yearlyPayment){
    this->name = name, this->id = id, this->type = type;
    }

// To Do:

/* IMPLEMENT GETTERS*/  // done
std::string Employee::getType(){
return this->type;
}

std::string Employee::getName(){  
   return this->name;
}

int Employee::getID() const {
  return this->id;
}