#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	int a[m];
	for (int& x: a) {
		cin >> x;
	}
	set<int> s;
	vector<int> v;
	for (int i = 0; i < m; i++) {
		if (s.count(a[i]) == 0) {
			v.push_back(i+1);
			s.insert(a[i]);
		}
	}
	while (v.size() <= n) {
		v.push_back(-1);
	}
	for (int i = n-1; i >= 0; i--) {
		cout << v[i] << ' ';
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

