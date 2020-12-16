#pragma once //ashxatavardz stacox ashxatoxner
#ifndef COMMSSION_H
#define COMMISION_H

#include <string>
using std::string;

class CommissionEmployee
{
public:
	CommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0);
	~CommissionEmployee();//destruktor

	void setFirstName(const string&);//anvan mutqagrum
	string getFirstName() const;//anvan veradardz

	void setLastName(const string&);//azganvan mutqagrum
	string getLastName() const;// azganvan veradardz

	void setSocialSAecurityNumber(const string&);//ssn mutqagrum
	string getSocialSecurityNumber() const;//ssn veradardz

	void setGrossSales(double);//vacharqi @ndhanur arzheq
	double getGrossSales() const;//vacharqi @ndhanur qanaki veradardz

	void setCommissionRate(double);//tokosi nshanakum
	double getCommissionRate()const;//tokosi veradardz

	double earnings()const;//ashxatavardzi mutq
	void print() const;//tpel commissionemployee obyektn
private:
	string firstName;
	string lastName;
	string socialSecurityNumber;
	double grossSales;//shabatva vacharq
	double commissionRate;//harkayini tokos
};//CommissionEmployee klassi verj
#endif


