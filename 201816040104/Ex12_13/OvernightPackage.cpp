#include "OvernightPackage.h"
#include <iostream>

using namespace std;
OvernightPackage::OvernightPackage(  string &a,  string &b,  string &c,
         string &d,  string &e, int f, double g, double h,double i )
          :Package(a,b,c,d,e,f,g,h)
{
    setExCost( i );
}
void OvernightPackage::setExCost( double a )
{
    while(a>0)
        {exCost=a;}
    while(a<=0)
    {
        cerr<<"excost<=0"<<endl;
        exit(0);
    }
}
double OvernightPackage::getExCost()
{
    return exCost;
}
double OvernightPackage::calculateCost()
{
    return Package::getWight()*(Package::getCost()+exCost);
}
void OvernightPackage::display()
{
    Package::display();
    cout<<setw(5)<<calculateCost()<<"   OvernightPackage  :"<<setw(5)<<getExCost()<<endl;
}
