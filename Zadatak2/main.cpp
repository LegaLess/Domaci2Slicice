#include <iostream>
#include <string>
#include "Slicica.h"
#include "Stamparija.h"
#include "Spil.h"

using namespace std;

int main() {

	Stamparija stamparija(new string[]{ "Mbape", "Mitrovic", "Harry" , "Roney"}, 4);

	Spil spil;

	Slicica* s1 = stamparija.stampaj(1);
	Slicica* s2 = stamparija.stampaj(2);
	Slicica* s3 = stamparija.stampaj(4);
	Slicica* s4 = stamparija.stampaj(2);
	Slicica* s5 = stamparija.stampaj(3);

	spil += *s1;
	spil += *s2;
	spil += *s3;
	spil += *s4;
	spil += *s5;

	spil.resetujTekucu();
	spil.pomeriTekucu().pomeriTekucu().pomeriTekucu();

	cout << spil << endl;

	cout << spil.getTekucu() << endl;

	cout << endl;

	spil.izvadi(5);

	cout << spil << endl;

	if (spil % 5) {
		cout << true;
	}

	return 0;
}
