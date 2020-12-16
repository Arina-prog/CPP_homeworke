#include "CommissionEmployee.h"
#include<iostream>
using std::cout;
using std::endl;

CommissionEmployee::CommissionEmployee(const string& first, const string& last, const string& ssn, double sales, double rate) 
	:firstName(first), lastName(last), socialSecurityNumber(ssn)//konstruktor
{
	setGrossSales(sales);//stugel ev pahpanel vacharqi tsavaln
	setCommissionRate(rate);//stugel ev pahpael tokosn

	cout << "Commission employee constructor: " << endl;
	print();
	cout << "\n\n";
}//konstruktori marmni verj

//destruktor
CommissionEmployee::~CommissionEmployee()
{
	cout << "commission employee destructor: " << endl;
	print();
	cout << "\n\n";

}//destructori marmni verj

//anvan mutqagrum
void CommissionEmployee::setFirstName(const string& first)
{
	firstName = first;//stugvum e
}//setFirstName funkciayi verj

//veradardzni anunn
string CommissionEmployee::getFirstName() const
{
	return firstName;
}
//getFirstName funkciayi verj

//funkciayi marmin
void CommissionEmployee::setLastName(const string& last)
{
	lastName = last;//stugum e
}//setLastName funkciayi verj

//azganvan veradardz
string CommissionEmployee::getLastName() const
{
	return lastName;
}//getLastName funkciayi verj
//apahovagrutyan hamarn
void CommissionEmployee::setSocialSAecurityNumber(const string& ssn)
{
	socialSecurityNumber = ssn;//stugvum e
}//setSocialSecurityNumber funkciayi verj

//apahovagrutyan hamari veradardz
string CommissionEmployee::getSocialSecurityNumber()const
{
	return socialSecurityNumber;
}//getSocialSecurityNumber funkciayi verj

//vacharqi @ndhanur chapn
void CommissionEmployee::setGrossSales(double sales)
{
	grossSales = (sales < 0.0) ? 0.0 : sales;
}//setGrossSales funkciayi verj

//vacharqi amboxj gumari veradardz
double CommissionEmployee::getGrossSales() const
{
	return grossSales;
}//getGrossSalves funkciayi verj

//harki tokosi voroshum
void CommissionEmployee::setCommissionRate(double rate)
{
	commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}//setCommissionRate funkciayi verj

//harkayin tokosi chapi veradardz
double CommissionEmployee::getCommissionRate()const
{
	return commissionRate;
}//getCommissionRate funkciayi verj

//ashxatavardzi hashvum veradardz
double CommissionEmployee::earnings() const
{
	return getCommissionRate() * getGrossSales();
}// earnings funkciayi verj
//tpel CommissionEmployee objektn
void CommissionEmployee::print() const
{
	cout << "commission employee: " << getFirstName() << ' ' << getLastName() << "\nsocial security number: "
		<< getSocialSecurityNumber() << "\n gross sales: " << getGrossSales()
		<< "\n commission rate: " << getCommissionRate();
}//print funkciayi verj
