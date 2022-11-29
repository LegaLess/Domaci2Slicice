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

	int brojRazlicitih() const;

private:

	void premesti(Stamparija&);

	string* nazivi;

	int len;

};

#endif