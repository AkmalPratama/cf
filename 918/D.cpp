#include <bits/stdc++.h>
#define ll long long
using namespace std;

set<char> v = {'a', 'e'};
set<char> c = {'b', 'c', 'd'};

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	string t = "";
	for (int i = 0; i < n-1; i++) {
		t += s[i];
		if ((c.count(s[i]) != 0) && (c.count(s[i+1]) != 0)) {
			//cout << '.';
			t += ".";
		}
	}
	t += s[n-1];
	for (int i = 0; i < t.length(); i++) {
		cout << t[i];
		if (i < t.length()-2) {
			if ((v.count(t[i]) != 0) && (v.count(t[i+2]) != 0)) {
				cout << '.';
			}
		}
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

