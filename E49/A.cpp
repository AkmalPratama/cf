#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		string s;
		cin >> n;
		cin >> s;
		bool b = true;
		for (int j = 0; j < (n/2); j++) {
			if (s[j] != s[(n-1) - j]) {
				if (abs(s[j] - s[(n-1) - j]) != 2) {
					b = false;
				}
			}
		}
		if (b) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
