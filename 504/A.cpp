#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, m;
	cin >> n >> m;
	string s, t;
	cin >> s >> t;
	bool exist = false;
	int id = -1;
	for (int i = 0; i < n; i++) {
		if (s[i] == '*') {
			exist = true;
			id = i;
		}
	}
	if (exist) {
		if ((n-1) > m) {
			cout << "NO" << endl;
		} else {
			bool diff = false;
			for (int i = 0; i < id; i++) {
				if (s[i] != t[i]) {
					diff = true;
					break;
				}
			}
			for (int i = (n-1); i > id; i--) {
				if (s[i] != t[i + (m-n)]) {
					diff = true;
					break;
				}
			}
			if (diff) {
				cout << "NO" << endl;
			} else {
				cout << "YES" << endl;
			}
		}
	} else {
		if (s == t) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
