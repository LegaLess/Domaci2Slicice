#include <iostream>
#include <string>
#include "Slicica.h"

using namespace std;

int Slicica::staticID = 0;

int Slicica::getID() { return ID; }

int Slicica::getBroj() { return broj; }

string Slicica::getNaziv() { return naziv; }

ostream& operator<<(ostream& it, const Slicica& s)
{
	it << "Slicica " << s.broj << "-" << s.naziv << "(" << s.ID << ")";
	return it;
}
