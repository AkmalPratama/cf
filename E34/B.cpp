#include <iostream>
using namespace std;

int main () {
	int h1, a1, c;
	int h2, a2;
	
	cin >> h1 >> a1 >> c;
	cin >> h2 >> a2;
	
	int phase;
	int str = 0;
	int heal = 0;
	while (h2 > 0) {
		if ((h1 - a2) > 0 || (h2 - a1) <= 0) {
			h2 -= a1;
			str++;
		} else {
			h1 += c;
			heal++;
		}
		h1 -= a2;
		phase++;
	}
	cout << phase << endl;
	for (int i = 0; i < heal; i++) {
		cout << "HEAL" << endl;
	}
	for (int i = 0; i < str; i++) {
		cout << "STRIKE" << endl;
	}
	return 0;
}
