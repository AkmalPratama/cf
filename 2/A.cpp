#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin >> n;
	map<string, int> m;
	int mx = INT_MIN;
	string ans = "ll";
	for (int i = 0; i < n; i++) {
		string s;
		int x;
		cin >> s >> x;
		if (m.count(s) > 0) {
			m[s] += x;
		} else {
			m[s] = x;
		}
		if (mx < m[s]) {
			mx = m[s];
			ans = s;
		}
	}
	cout << ans << endl;
	return 0;
}
