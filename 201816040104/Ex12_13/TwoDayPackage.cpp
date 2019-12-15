#include <string>
#include "Package.h"
#include "TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(const string &nam,const string &nams,const string &add,const string &cit,const string &sta,
		const string& pos,double weight , double fee , double cost)
		:Package(nam,nams,add,cit,sta,pos,wei,fe)
{
	setFlatcharge(cost);
}

void TwoDayPackage::setFlatcharge(double aa)
{
	flatcharge = aa;
}

double TwoDayPackage::getFlatcharge()
{
	return flatcharge;
}

double TwoDayPackage::calculateCost()
{
	return TwoDayPackage::calculateCost()+getFlatcharge();
}
