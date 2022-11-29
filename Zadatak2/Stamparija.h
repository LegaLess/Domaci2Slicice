#ifndef _STAMPARIJA_H_
#define _STAMPARIJA_H_

#include <iostream>
#include <string>
#include "Slicica.h"

using namespace std;

class Stamparija {

public:

	Stamparija(string*, int);

	Stamparija(const Stamparija&) = delete;

	Stamparija(Stamparija&& s) { premesti(s); }

	Slicica* stampaj(int);

	int brojRazlicitih();

private:

	void premesti(Stamparija&);

	static int brojJedinstvenih;

	string* nazivi;

	string naziviJ[4];

	int len;

};

#endif