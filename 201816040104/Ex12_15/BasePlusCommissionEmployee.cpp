#include <iostream>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h"
using namespace std;
//constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee( const string &first , const string &last , const string &ssn , double sales , double rate , double salary )
:CommissionEmployee( first , last , ssn , sales , rate )
{
    setBaseSalary( salary );//validate and store base salary
}
// set base salary
void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
    while ( salary >= 0.0 )
        {baseSalary = salary;}
    while (salary<0)
    {
       throw invalid_argument( "Salary must be >= 0.0 " );
    }

}//end function setBaseSalary
double BasePlusCommissionEmployee::getBaseSalary() const
{
	return baseSalary;
}
double BasePlusCommissionEmployee::earnings() const
{
	return getBaseSalary() + CommissionEmployee::earnings();
}
void BasePlusCommissionEmployee::print() const
{
    cout << "base-salaried ";
    CommissionEmployee::print();
    cout << "; base salary : " << getBaseSalary() ;
}
