#ifndef _SLICICA_H_
#define _SLICICA_H_

#include <iostream>
#include <string>

using namespace std;

class Slicica {


public:

	Slicica(int br, string n) : broj(br), naziv(n) { staticID++; }

	Slicica(const Slicica&) = delete;

	friend ostream& operator<<(ostream&, const Slicica&);

	int getID();

	int getBroj();

	string getNaziv();

private:

	static int staticID;
	int ID = staticID;

	int broj;
	string naziv;

};

#endif
