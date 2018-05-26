#include <iostream>
using namespace std;

int main () {
	int a1, a2, a3 , am;
	int b1, b2, b3;
	cin >> a1 >> a2 >> a3 >> am;
	bool poss = true;
	if ((a1) <= (am)) {
		poss = false;
	}
	if ((a2) <= (am)) {
		poss = false;
	}
	if ((2 * am) < a3 || (2 * a3) < am) {
		poss = false;
	}
	
	if (poss) {
		b1 = 2 * a1;
		b2 = 2 * a2;
		if (am < a3) {
			b3 = 2 * am;
		} else {
			b3 = am;
		}
		cout << b1 << endl;
		cout << b2 << endl;
		cout << b3 << endl;
	} else {
		cout << "-1" << endl;
	}
	return 0;
}
