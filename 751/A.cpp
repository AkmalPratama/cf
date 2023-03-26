#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s;
	cin >> s;
	char a = s[0];
	int id = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] < a) {
			a = s[i];
			id = i;
		}
	}
	cout << a << " ";
	for (int i = 0; i < s.size(); i++) {
		if (i != id) {
			cout << s[i];
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
