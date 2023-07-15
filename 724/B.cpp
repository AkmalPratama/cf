#include <bits/stdc++.h>
using namespace std;

int alptoi(string s) {
	int x = 0;
	for (int i = 0; i < s.length(); i++) {
		x *= 26;
		x += s[i] - 'a' + 1;
	}
	return x;
}

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	set<int> st1, st2, st3;
	for (int i = 0; i < s.length(); i++) {
		st1.insert(alptoi(s.substr(i, 1)));
	}
	if (s.length() > 1) {
		for (int i = 0; i < s.length()-1; i++) {
			st2.insert(alptoi(s.substr(i, 2)));
		}
	}
	if (s.length() > 2) {
		for (int i = 0; i < s.length()-2; i++) {
			st3.insert(alptoi(s.substr(i, 3)));
		}
	}
	if (st1.size() < 26) {
		for (int i = 1; i <= 26; i++) {
			if (!st1.count(i)) {
				cout << char(i + 'a' - 1) << endl;
				return;
			}
		}
	}
	if (st2.size() < 26 * 26 && !st2.empty()) {
		for (int i = 1; i <= 26 * 26; i++) {
			int x = i + 26;
			if (!st2.count(x)) {
				cout << char((x / 26) + 'a' - 1) << char((x % 26) + 'a' - 1) << endl;
				return;
			}
		}
	}
	if (st3.size() < 26 * 26 * 26 && !st3.empty()) {
		for (int i = 1; i <= 26 * 26 * 26; i++) {
			int x = i + 702;
			if (!st3.count(x)) {
				cout << char((x / (26 * 26)) + 'a' - 1);
				x %= (26 * 26);
				cout << char((x / 26) + 'a' - 1);
				x %= 26;
				cout << char((x % 26) + 'a' - 1) << endl;
				return;
			}
		}
	}
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

