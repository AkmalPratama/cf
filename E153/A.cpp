#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s, s1, s2;
	cin >> s;
	s1 = "";
	s2 = "";
	for (int i = 0; i < s.length(); i++) {
		s1 += "()";
		s2 += "(";
	}
	for (int i = 0; i < s.length(); i++) {
		s2 += ")";
	}
	if (s1.find(s) == string::npos) {
		cout << "YES\n";
		cout << s1 << endl;
	} else if (s2.find(s) == string::npos) {
		cout << "YES\n";
		cout << s2 << endl;
	} else {
		cout << "NO\n";
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

