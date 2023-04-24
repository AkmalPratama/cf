#include <bits/stdc++.h>
using namespace std;

string rep(string s, int n, char c) {
	string out = s;
	int cnt = 0;
	for (int i = 0; i < out.length(); i++) {
		if (cnt < n && out[i] == c) {
			out[i] = ' ';
			cnt++;
		}
		if (cnt == n) {
			break;
		}
	}
	return out;
}

void solve() {
	string s, t;
	cin >> s >> t;
	for (int i = 0; i < s.length(); i++) {
		if (t.find(s[i]) == string::npos) {
			s.replace(i, 1, "");
			i--;
		}
	}
	map<char,int> ms, mt;
	for (int i = 0; i < t.length(); i++) {
		if (mt.count(t[i])) {
			mt[t[i]] += 1;
		} else {
			mt[t[i]] = 1;
		}
	}
	for (int i = 0; i < s.length(); i++) {
		if (ms.count(s[i])) {
			ms[s[i]] += 1;
		} else {
			ms[s[i]] = 1;
		}
	}
	if (s.length() < t.length()) {
		cout << "NO\n";
		return;
	}
	int idx = 0;
	for (int i = 0; i < s.length(); i++) {
		int diff = abs(ms[s[i]] - mt[s[i]]);
		if (ms[s[i]] > mt[s[i]]) {
			ms[s[i]] = mt[s[i]];
		} else {
			mt[s[i]] = ms[s[i]];
		}
		s = rep(s, diff, s[i]);
	}
	string ss = "";
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != ' ')
			ss += s[i];
	}
	if (ss == t) {
		cout << "YES\n";
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
