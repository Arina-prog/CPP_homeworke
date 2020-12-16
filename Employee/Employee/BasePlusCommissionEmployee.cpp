#include "BasePlusCommissionEmployee.h"
#include <iostream>
using std::cout;
using std::endl;

//konstruktor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& first, const string& last,
	const string& ssn, double sales, 
	double rate, double salary):CommissionEmployee(first, last, ssn, sales, rate)//kanchum e basayin klassi konstruktorn
{
	setBaseSalary(salary);//stugum ev pahum e ashxatavardzn
	cout << " BasePlusCommissionEmployee constructor: " << endl;
	print();
	cout << "\n\n";

}//BasePlusCommissionEmployee konstruktori verj

BasePlusCommissionEmployee::~BasePlusCommissionEmployee()//destruktor
{
	cout << "BasePlusCommissionEmployee destructor: " << endl;
	print();
	cout << "\n\n";
}//destruktori verj

//ashxatavardzi voroshum
void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
	baseSalary = (salary < 0.0) ? 0.0 : salary;
}//setBaseSalary funkciayi verjn

//ashxatavardzi veradardz
double BasePlusCommissionEmployee::getBaseSalary()const
{
	return baseSalary;
}//getBaseSalary funkciayi verj

//hasvarkel ashxatavardzn
double BasePlusCommissionEmployee::earnings()const
{
	return getBaseSalary() + CommissionEmployee::earnings();
}//earnings funkciayi verj
//tpel BasePlusCommissionEmployee klassi objektnern
void::BasePlusCommissionEmployee::print()const
{
	cout << "base-salaried";
	//commissionEmployee klassi print funkciayi kanch
	CommissionEmployee::print();
	cout << "\n base slary: " << getBaseSalary();
}//print funkciayi verj