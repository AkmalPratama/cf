#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s;
	cin >> s;
	if (s[0] == s[1] || (s[0] == 'b' && s[1] == 'a')) {
		cout << s[0] << " " << s[1] << " " << s.substr(2, s.length() - 2) << endl;
		return;
	}
	if (s[0] == 'a' && s[1] == 'b') {
		bool found = false;
		int idx;
		for (int i = 2; i < s.length(); i++) {
			if (s[i] == 'a') {
				found = true;
				idx = i;
				break;
			}
		}
		if (found) {
			cout << s[0] << " " << s.substr(1, idx-1) << " " << s.substr(idx) << endl;
		} else {
			cout << s[0] << " " << s.substr(1, s.length() -2) << " " << s[s.length()-1] << endl;
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

