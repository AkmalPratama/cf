#include <iostream>
using namespace std;

int main () {
	int n, x, i;
	bool a, b, c;
	
	a = true;
	b = true;
	c = false;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> x;
		if ((x == 1) && (a)) {
			if (b) {
				b = false;
				c = true;
			} else {
				c = false;
				b = true;
			}
		} else if ((x == 2) && (b)) {
			if (a) {
				a = false;
				c = true;
			} else {
				c = false;
				a = true;
			}
		} else if ((x == 3) && (c)) {
			if (a) {
				a = false;
				b = true;
			} else {
				b = false;
				a = true;
			}
		} else {
			cout << "NO" << endl;
			break;
		}
	}
	//cout << i;
		
	if (i == n) {
		cout << "YES" << endl;
	}
}
