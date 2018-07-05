#include <bits/stdc++.h>

using namespace std;

int main () {
	int a, b, x;
	bool specCase = false;
	
	cin >> a >> b >> x;
	string s = "";
	if (a < b) {
		s += "1";
		b--;
		for (int i = 0; i < x; i++) {
			if ((i % 2) == 0) {
				s += "0";
				a--;
			} else {
				s += "1";
				b--;
			}
		}
		if (s[s.length()-1] == s[0]) {
			specCase = true;
		} else {
			if (a > 0) {
				for (int i = 0; i < a; i++) {
					s += "0";
				}
				a = 0;
			}
		}
		if (b > 0) {
			for (int i = 0; i < b; i++) {
				s = "1" + s;
			}
			b = 0;
		}
	} else {
		s += "0";
		a--;
		for (int i = 0; i < x; i++) {
			if ((i % 2) != 0) {
				s += "0";
				a--;
			} else {
				s += "1";
				b--;
			}
		}
		if (a > 0) {
			for (int i = 0; i < a; i++) {
				s = "0" + s;
			}
			a = 0;
		}
		if (s[s.length()-1] == s[0]) {
			specCase = true;
		} else {
			if (b > 0) {
				for (int i = 0; i < b; i++) {
					s += "1";
				}
				b = 0;
			}
		}
	}
	if (specCase) {
		for (int i = 0; i < s.length()-1; i++) {
			cout << s[i];
		}
		if (a < b) {
			for (int i = 0; i < b; i++) {
				cout << 1;
			}
		} else {
			for (int i = 0; i < a; i++) {
				cout << 0;
			}
		}
		cout << s[s.length()-1] << endl;
	} else {
		cout << s << endl;
	}
	return 0;
}

