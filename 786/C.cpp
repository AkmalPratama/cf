#include <bits/stdc++.h>
using namespace std;

int cntA(string s) {
	char c = 'a';
	int cnt = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == c) {
			cnt++;
		}
	}
	return cnt;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		string s, t;
		cin >> t >> s;
		if (s.length() == 1) {
			if (s == "a") {
				cout << 1 << endl;
			} else {
				cout << (long long)(pow(2, cntA(t))) << endl;
			}
		} else {
			int cnt = cntA(s);
			if (cnt > 0) {
				cout << -1 << endl;
			} else {
				cout << (long long)(pow(2, cntA(t))) << endl;
			}
		}
	}
	return 0;
}

