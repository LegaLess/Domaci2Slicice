#include <iostream>
#include <string>
#include "Slicica.h"

using namespace std;

int main() {

	Slicica s1(1, "Messi");
	Slicica s2(23, "Ronaldo");
	Slicica s3(17, "Kolja");

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;

	return 0;
}
