#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"

class HourlyEmployee : public Employee {
public:
    double payPerHour;
    double workedHours;
    HourlyEmployee();
    HourlyEmployee(const std::string& name, int id, double payPerHour, double workedHours);
    double getPayPerHour();
    double GetWorkedHours();
    double calculatePay() const override;
};

#endif

