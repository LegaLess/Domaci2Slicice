#include <iostream>
#include <string>
#include "Stamparija.h"

using namespace std;

int Stamparija::brojJedinstvenih = 0;

Stamparija::Stamparija(string* n, int l) : nazivi(n), len(l) {}

Slicica* Stamparija::stampaj(int br)
{
	bool postoji = false;

	if (br <= 0 || br > len) { return nullptr; }

	string n = nazivi[br - 1];

	for (int i = 0; i < len; i++) {
		if (n == naziviJ[i]) postoji = true;
	}

	if (!postoji) {
		
		naziviJ[brojJedinstvenih] = n;

		brojJedinstvenih++;
	}

	return new Slicica(br, n);

}

int Stamparija::brojRazlicitih() { return brojJedinstvenih; }

void Stamparija::premesti(Stamparija& s)
{
	this->nazivi = s.nazivi;
	s.nazivi = nullptr;
}
