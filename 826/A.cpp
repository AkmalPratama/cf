#include <bits/stdc++.h>
using namespace std;

int quantify(string s) {
	if (s[s.length()-1] == 'L') {
		return s.length();
	} else if (s[s.length()-1] == 'S') {
		return -s.length();
	} else {
		return 0;
	}
}

void solve() {
	string a, b;
	cin >> a >> b;
	if (quantify(a) < quantify(b)) {
		cout << '<' << endl;
	} else if (quantify(a) == quantify(b)) {
		cout << '=' << endl;
	} else {
		cout << '>' << endl;
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

