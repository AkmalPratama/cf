#include <bits/stdc++.h>
using namespace std;

string pattern(int n) {
	int repeat = n / 3;
	string s = "";
	for (int i = 0; i < repeat; i++) {
		s += "21";
	}
	return s;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		if (n % 3 == 2) {
			s = pattern(n+1);
			s = s.substr(0, s.length()-1);
			cout << s << endl;
		} else if (n % 3 == 0) {
			cout << pattern(n) << endl;
		} else {
			s = pattern(n-1);
			s = "1" + s;
			cout << s << endl;
		}
	}
	return 0;
}

