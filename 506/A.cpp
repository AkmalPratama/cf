#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int a[26];
	for (int i = 0; i < 26; i++) {
		a[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		a[s[i]-97]++;
	}
	bool b = false;
	for (int i = 0; i < 26; i++) {
		if (a[i] > 1) {
			b = true;
		}
	}
	if (b) {
		cout << "Yes" << endl;
	} else {
		if (n == 1) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
	return 0;
}
