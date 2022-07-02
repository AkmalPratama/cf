#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		if (s.length() == 1) {
			cout << "NO" << endl;
		} else {
			bool bCnt = false;
			bool doubleB = false;
			for (int i = 0; i < s.length(); i++) {
				if (s[i] == 'B') {
					bCnt = true;
				}
				if (i < s.length()-1) {
					if (s[i] == s[i+1] && s[i] == 'B') {
						doubleB = true;
					}
				}
			}
			if (!bCnt) {
				cout << "NO" << endl;
			} else {
				if (doubleB) {
					cout << "NO" << endl;
				} else {
					if (s[0] == 'B') {
						cout << "NO" << endl;
					} else {
						cout << "YES" << endl;
					}
				}
			}
		}
	}
	return 0;
}
