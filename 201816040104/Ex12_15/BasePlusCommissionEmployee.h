#ifndef BASEPLUS_H
#define BASEPLUS_H
#include <string>
#include "CommissionEmployee.h"
using namespace std;
class BasePlusCommissionEmployee:public CommissionEmployee
{
public:
	BasePlusCommissionEmployee(const string &,const string &,const string &,double = 0.0,double = 0.0,double = 0.0);
	virtual ~BasePlusCommissionEmployee(){}
	 void setBaseSalary( double );//set base salary
    double getBaseSalary() const;//return base salary

    virtual double earnings() const override;//calculate earnings
    virtual void print() const override;//print object
private:
	double baseSalary;
};
#endif
