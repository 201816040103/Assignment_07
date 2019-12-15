#include "Package.h"
#include"OvernightPackage.h"
#include"TwoDayPackage.h"
#include <vector>

int main()
{

    cout<<setw(6)<<"senderName"<<setw(10)<<"recipientName"<<setw(10)<<"Address"<<setw(12)<<"City"<<setw(5)
    <<"State"<<setw(12)<<"PostalCode"<<setw(5)<<"Weight"<<setw(5)<<"µ¥¼Û"<<setw(5)<<"cost"<<setw(15)<<"Way"<<endl;


    vector <Package *>packages(2);
    packages[0]=new OvernightPackage("a","b","c","d","e",123456,5,11,0.5);
    packages[1]=new TwoDayPackage ("a","b","c","d","e",123456,6,11,10.5);

    for(Package *packagePtr:packages)
    {
        cout << "Delivery address : "<<packagePtr->getsenderAddress() <<endl<<"recipient address : "<<packagePtr->getrecipientAddress()<<endl<<packagePtr->calculateCost()<<endl;
        cout << "\n" ;
        sum += packagePtr->calculateCost();
    }
}
