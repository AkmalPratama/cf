#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int d[n];
	for (int i = 0; i < n; i++) {
		cin >> d[i];
	}
	vector<int> v;
	v.push_back(d[0]);
	for (int i = 1; i < n; i++) {
		if ((v.back() - d[i] >= 0) && (d[i] != 0)) {
			cout << -1 << endl;
			return;
		} else {
			v.push_back(v.back() + d[i]);
		}
	}
	for (int i = 0; i < v.size(); i++) {
		if (i == 0) {
			cout << v[i];
		} else {
			cout << " " << v[i];
		}
	}
	cout << endl;
}

int main() {
    int t; cin >> t;
    while (t--) {
    	solve();
	}
    return 0;
}
