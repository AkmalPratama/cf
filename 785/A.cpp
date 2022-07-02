#include <bits/stdc++.h>
using namespace std;

int val(string s) {
	int sum = 0;
	for (int i = 0; i < s.length(); i++) {
		sum += s[i] - '`';
	}
	return sum;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		if (s.length() % 2 == 0) {
			cout << "Alice " << val(s) << endl;
		} else {
			if (s.length() == 1) {
				cout << "Bob " << val(s) << endl;
			} else {
				int sLen = s.length();
				int valBob = min(s[0] - '`', s[s.length()-1] - '`');
				int valAlice = max(val(s.substr(0, sLen-1)), val(s.substr(1, sLen-1)));
				if (valAlice > valBob) {
					cout << "Alice " << valAlice - valBob << endl;
				} else {
					cout << "Bob " << valBob - valAlice << endl;
				}
			}
		}
	}
	return 0;
}

