#include <iostream>
#include <string>
#include "Slicica.h"
#include "Stamparija.h"

using namespace std;

int main() {

	Stamparija stamparija(new string[]{ "Mbape", "Mitrovic", "Harry" , "Roney"}, 4);

	Slicica* s1 = stamparija.stampaj(1);
	Slicica* s2 = stamparija.stampaj(2);
	Slicica* s3 = stamparija.stampaj(0);
	Slicica* s4 = stamparija.stampaj(4);
	Slicica* s5 = stamparija.stampaj(2);
	Slicica* s6 = stamparija.stampaj(3);


	cout << *s1 << endl;
	cout << *s2 << endl;
	cout << *s3 << endl;
	cout << *s4 << endl;
	cout << *s5 << endl;
	cout << *s6 << endl;

	cout << stamparija.brojRazlicitih() << endl;

	return 0;
}
