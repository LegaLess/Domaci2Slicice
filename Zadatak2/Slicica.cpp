#include <iostream>
#include <string>
#include "Slicica.h"

using namespace std;

int Slicica::staticID = 1;

int Slicica::getID() const { return ID; }

int Slicica::getBroj() const { return broj; }

string Slicica::getNaziv() const { return naziv; }

ostream& operator<<(ostream& it, const Slicica& s)
{
	if (&s) {
		it << "Slicica " << s.broj << "-" << s.naziv << "(" << s.ID << ")";
	}

	return it;
}
