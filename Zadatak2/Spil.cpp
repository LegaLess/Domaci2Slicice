#include <iostream>
#include <string>
#include "Spil.h"
#include "Slicica.h"


Spil& Spil::operator+=(Slicica& s)
{
	Elem* novi = new Elem(s);

	if (prvi) {
		novi->next = prvi;
		prvi = novi;
	}
	else {
		prvi = novi;
	}

	return *this;
}

Spil& Spil::resetujTekucu()
{
	trenutni = prvi;

	return *this;
}

Spil& Spil::pomeriTekucu()
{
	trenutni = trenutni->next;

	return *this;
}

bool Spil::proveriTekucu() const
{
	if (trenutni) return true;
	
	return false;
}

Slicica& Spil::getTekucu() const
{
	return *trenutni->slicica;
}

Spil& Spil::izvadi(const int k)
{
	int i = 1;
	Elem* tek = prvi;
	Elem* pret = prvi;

	if (k == 1) {
		prvi = tek->next;
		delete tek;

		return *this;
	}

	while (i != k) {
		if (!tek) return *this;
		pret = tek;
		tek = tek->next;
		i++;
	}

	pret->next = tek->next;
	delete tek;

	return *this;
}

bool Spil::operator%(const int br)
{
	bool postoji = false;

	Elem* tek = prvi;

	while (tek) {
		if (tek->slicica->getBroj() == br) {
			postoji = true;
			break;
		}
		tek = tek->next;
	}

	return postoji;
}

Spil::~Spil()
{
	brisi();
}

void Spil::brisi()
{
	Elem* tek = prvi;

	while (tek = prvi) {
		prvi = prvi->next;
		delete tek;
	}	
}

ostream& operator<<(ostream& it, const Spil& s)
{
	Spil::Elem* tek = s.prvi;

	while (tek) {
		it << *tek->slicica << endl;
		tek = tek->next;
	}


	return it;
}
