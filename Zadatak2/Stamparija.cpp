#include <iostream>
#include <string>
#include "Stamparija.h"

using namespace std;

Stamparija::Stamparija(string* n, int l) : nazivi(n), len(l) {}

Slicica* Stamparija::stampaj(int br)
{
	if (br <= 0 || br > len) { return nullptr; }

	string n = nazivi[br - 1];

	return new Slicica(br, n);

}

int Stamparija::brojRazlicitih() const { return len; }
