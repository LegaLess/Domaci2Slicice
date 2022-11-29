#ifndef _SLICICA_H_
#define _SLICICA_H_

#include <iostream>
#include <string>

using namespace std;

class Slicica {


public:


	Slicica(const Slicica&) = delete;

	friend ostream& operator<<(ostream&, const Slicica&);

	int getID() const;

	int getBroj() const;

	string getNaziv() const;

private:

	Slicica(int br, string n) : broj(br), naziv(n) { if(this) staticID++; }

	static int staticID;
	int ID = staticID;

	int broj;
	string naziv;

	friend class Stamparija;

};

#endif
