#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include "Package.h"
class OvernightPackage:public Package
{
public:
    OvernightPackage( string &,  string &,  string &,  string &,
              string &, int=0, double=0, double=0,double=0 );
    virtual ~OvernightPackage(){}
    void setExCost( double );
    double getExCost();
     double calculateCost() override;
     void display() override;
private:
    double exCost;
};

