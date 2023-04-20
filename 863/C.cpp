#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int b[n-1];
	for (int i = 0; i < n-1; i++) {
		cin >> b[i];
	}
	vector<int> v;
	bool c = false;
	for (int i = 0; i < n-1; i++) {
		if (b[i] < b[i+1] && !c) {
			v.push_back(b[i]);
			v.push_back(b[i]);
			c = true;
		} else {
			v.push_back(b[i]);
		}
	}
	if (v.size() != n) {
		v.push_back(b[n-2]);
	}
	for (int i = 0; i < v.size()-1; i++) {
		if (max(v[i], v[i+1]) != b[i]) {
			v[i] = v[i+1];
		}
	}
	for (int x: v) {
		cout << x << ' ';
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

