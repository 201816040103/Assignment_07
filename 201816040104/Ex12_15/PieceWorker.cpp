#include "PieceWorker.h"
#include <string>
#include <iostream>
using namespace std;

PieceWorker::PieceWorker( const string &first , const string &last , const string &ssn , double wwage , double ppiece )
:Employee( first , last , ssn )
{
    setWage( wwage );
    setPieces( ppiece );
}

void PieceWorker::setWage( double wwage )
{
    wage = wwage ;
}

double PieceWorker::getWage() const
{
    return wage;
}

void PieceWorker::setPieces( double ppiece )
{
   while(piecesd >= 0.0)

		{pieces = piecesd;}
	while(piecesd < 0.0)
		{throw invalid_argument("Pieces must be >= 0.0");}
}

double PieceWorker::getPieces() const
{
    return pieces;
}

double PieceWorker::earnings() const
{
    return getWage() * getPieces() ;
}

void PieceWorker::print() const
{
    cout << "Piece Worker : ";
    Employee::print();
    cout << "\n Wage : " << getWage() << "; Piece : " << getPieces() ;
}
