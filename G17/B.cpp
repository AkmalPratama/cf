#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPal(const vector<int>& v) {
	for (int i = 0; i < v.size()/2; i++) {
		if (v[i] != v[v.size()-i-1]) {
			return false;
		}
	}
	return true;
}

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int &x: a) {
		cin >> x;
	}
	for (int i = 0; i < n/2; i++) {
		if (a[i] != a[n-i-1]) {
			vector<int> v, w;
			for (int j = 0; j < n; j++) {
				if (a[j] != a[i]) {
					v.push_back(a[j]);
				}
			}
			for (int j = 0; j < n; j++) {
				if (a[j] != a[n-i-1]) {
					w.push_back(a[j]);
				}
			}
			if (isPal(v) || isPal(w)) {
				cout << "YES\n";
			} else {
				cout << "NO\n";
			}
			return;
		}
	}
	cout << "YES\n";
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

