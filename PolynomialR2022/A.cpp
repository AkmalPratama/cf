#include <bits/stdc++.h>
using namespace std;

string solve() {
	int n;
	string s;
	cin >> n;
	cin >> s;
	bool b;
	string ans = "";
	if (s[0] == '1') {
		b = true;
	} else {
		b = false;
	}
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == '0') {
			ans += "+";
		} else {
			if (!b) {
				ans += "+";
				b = true;
			} else {
				ans += "-";
				b = false;
			}
		}
	}
	return ans;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		cout << solve() << endl;
	}
	return 0;
}
