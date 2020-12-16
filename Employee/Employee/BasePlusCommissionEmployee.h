#pragma once
#ifndef COMMSSION_H
#define COMMISION_H
#include <string>
using std::string;
#include "CommissionEmployee.h"

class BasePlusCommissionEmployee :
    public CommissionEmployee
{
public:
    BasePlusCommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0, double = 0.0);
    ~BasePlusCommissionEmployee();//destructor
    void setBaseSalary(double);//ashxatavardzi nshanakum
    double getBaseSalary()const;//veradardznel ashxatavardz
    double earnings() const;//hashvi ashxatavardzn
    void print()const;//tpi BasePlusCommissionEmployee
private:
    double baseSalary;//ashxatavardz
};//BasePlusCommissionEmployee klassi verj
#endif