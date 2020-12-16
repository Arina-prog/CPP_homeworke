#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setprecision;
#include "BasePlusCommissionEmployee.h"
int main() 
{
	cout << fixed << setprecision(2);//sahox ketov tveri formatavorum
	{
		CommissionEmployee employee1("Bob", "Lewis", "333-33-3333", 5000, .04);
	}//hasaneliutyan verj
	cout << endl;
	BasePlusCommissionEmployee employee2("lisa", "Jones", "555-55-5555", 2000, .06, 800);
	cout << endl;
	BasePlusCommissionEmployee employee3("Mark", "Sands", "888-88-8888", 8000, .15, 2000);
	cout << endl;
	return 0;
}//maini verj