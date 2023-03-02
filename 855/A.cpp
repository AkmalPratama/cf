#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	string t = "";
	for (int i = 0; i < n; i++) {
		char c = tolower(s[i]);
		if (c == 'm') {
			t += "1";
		}
		if (c == 'e') {
			t += "2";
		}
		if (c == 'o') {
			t += "3";
		}
		if (c == 'w') {
			t += "4";
		}
	}
	vector<int> v;
	int me, eo, ow;
	me = eo = ow = -1;
	for (int i = 0; i < n-1; i++) {
		if (t[i] != t[i+1]) {
			v.push_back(i);
			if (t[i] == '1' && t[i+1] == '2') {
				me = i;
			} else if (t[i] == '2' && t[i+1] == '3') {
				eo = i;
			} else  if (t[i] == '3' && t[i+1] == '4') {
				ow = i;
			} else {
				cout << "NO\n";
				return;
			}
		}
	}
	if (v.size() == 3 && me < eo && eo < ow)
		cout << "YES\n";
	else
		cout << "NO\n";
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

