#include <bits/stdc++.h>
using namespace std;

pair<int,int> f(int a, int b) {
	int g = __gcd(a, b);
	a /= g;
	b /= g;
	return {a, b};
}

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int d, k;
	d = k = 0;
	map<pair<int, int>, int> mp;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'D') {
			d++;
		} else {
			k++;
		}
		cout << ++mp[f(d, k)] << ' ';
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

