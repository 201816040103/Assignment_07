#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;
class Employee
{
public:
	Employee(const string &,const string &,const string &);
	virtual ~Employee(){}
	void setFirstName(const string &);
	std::string getFirstName() const;
	void setLastName(const string &);
	string getLastName() const;
	void setSocialSecurityNumber(const string &);
	std::string getSocialSecurityNumber() const;
	virtual double earnings() const=0;
	virtual void print() const;
private:
	std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
}
#endif
