#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s, t;
	cin >> s >> t;
	sort(s.begin(), s.end());
	if (s.length() < 3) {
		cout << s << endl;
		return;
	}
	set<char> st(s.begin(), s.end());
	if (t == "abc" && st.count('a') && st.count('b') && st.count('c')) {
		s += s + "a";
		int cnt = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'b') {
				cnt++;
			}
			if (s[i] != 'b') {
				cout << s[i];
			}
			if (s[i] == 'c' && s[i+1] != 'c') {
				for (int j = 0; j < cnt; j++) {
					cout << 'b';
				}
			}
			if (s[i] > s[i+1]) {
				cout << endl;
				break;
			}
		}
		return;
	}
	cout << s << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
