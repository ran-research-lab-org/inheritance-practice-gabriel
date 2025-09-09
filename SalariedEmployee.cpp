#include "SalariedEmployee.h"
#include <string>

SalariedEmployee::SalariedEmployee()
    :Employee(name, id, "Salaried", 0.0, 0.0, yearlyPayment){
    this->yearlyPayment = 0.0;
}

SalariedEmployee::SalariedEmployee(const std::string& name, int id, double yearlyPayment)
    :Employee(name, id, "Salaried", 0.0, 0.0, yearlyPayment){
        this->yearlyPayment = yearlyPayment;
}

double SalariedEmployee::getYearlyPayment() const {
    return yearlyPayment;
}

 double SalariedEmployee::calculatePay() const {
    return yearlyPayment / 26;
 }
    // TODO: 

/*TODO: calculate Payment */ //done

/* IMPLEMENT GETTERS*/ //done