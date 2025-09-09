#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(const std::string& name, int id, 
double payPerHour, double workedHours)
    :Employee(name, id, "Hourly", payPerHour, workedHours, 0.0){
    this->workedHours = workedHours;
    }

    // TODO: 

double HourlyEmployee::GetWorkedHours(){
    return workedHours;
}

double HourlyEmployee::getPayPerHour(){
    return payPerHour;

}
/*TODO: calculate Payment */   // done

double HourlyEmployee::calculatePay() const {
    return (workedHours * payPerHour)/ 26;
}





