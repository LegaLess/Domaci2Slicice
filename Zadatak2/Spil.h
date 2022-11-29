#ifndef _SPIL_H_
#define _SPIL_H_
#include <iostream>
#include <string>
#include "Slicica.h"

using namespace std;

class Spil {

public:

	Spil() : prvi(nullptr), trenutni(nullptr) {}

	Spil(const Spil&) = delete;

	Spil& operator+=(Slicica&);

	Spil& resetujTekucu();

	Spil& pomeriTekucu();

	bool proveriTekucu() const;
	
	Slicica& getTekucu() const;

	Spil& izvadi(const int);

	friend ostream& operator<<(ostream&, const Spil&);

	bool operator%(const int);

	~Spil();

private:

	void brisi();

	struct Elem {
		Slicica* slicica;
		Elem* next = nullptr;
		Elem(Slicica& s) : slicica(&s), next(nullptr) {}
	};

	Elem* prvi;
	Elem* trenutni;

};

#endif