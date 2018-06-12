#include <bits/stdc++.h>

using namespace std;

int main () {
	string s;
	cin >> s;
	bool b = false;
	for (int i = 1; i < s.length() - 1; i++) {
		if ((65 * 66 * 67) == (s[i-1] * s[i] * s[i+1])) {
			b = true;
		}
	}
	if (b) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
