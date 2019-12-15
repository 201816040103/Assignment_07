#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
class Package
{
public:
    Package( const string& , const string& , const string& , const string& , const string& ,
            const string& , const string& , const string& , const string& , const string& ,
            double , double );
    void setsenderName( const string& );
    string getsenderName();

    void setsenderAddress( const string& );
    string getsenderAddress();

    void setsenderCity( const string& );
    string getsenderCity();

    void setsenderState( const string& );
    string getsenderState();

    void setsenderPostalCode( const string& );
   string getsenderPostalCode();

    void setrecipientName( const string& );
    string getrecipientName();

    void setrecipientAddress( const string& );
    string getrecipientAddress();

    void setrecipientCity( const string& );
    string getrecipientCity();

    void setrecipientState( const string& );
    string getrecipientState();

    void setrecipientPostalCode( const string& );

    void setpackageWeight( double );
    double getpackageWeight();

    void setcostPerOunce( double );
    double getcostPerOunce();

    virtual double calculateCost() ;

    void print() ;
private:
    string senderName;
    string senderAddress;
    string senderCity;
    string senderState;
    string senderPostalCode;
    string recipientName;
    string recipientAddress;
    string recipientCity;
    string recipientState;
    string recipientPostalCode;
    double packageWeight;
    double costPerOunce;
};

#endif // PACKAGE_H_INCLUDED
