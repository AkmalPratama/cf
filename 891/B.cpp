#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s;
	cin >> s;
	int idx = -1;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] > '4') {
			idx = i;
			break;
		}
	}
	if (idx == -1) {
		cout << s << endl;
		return;
	}
	bool plus1 = false;
	for (int i = idx; i >= 0; i--) {
		if (plus1) {
			if (s[i] > '3') {
				s[i] = '0';
			} else {
				s[i]++;
				plus1 = false;
			}
		} else {
			if (s[i] > '4') {
				s[i] = '0';
				plus1 = true;
			} else {
				s[i];
				plus1 = false;
			}
		}
	}
	if (plus1) {
		cout << 1;
	}
	for (int i = 0; i <= idx; i++) {
		cout << s[i];
	}
	for (int i = idx + 1; i < s.length(); i++) {
		cout << 0;
	}
	cout << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

