#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool f(const pair<int,int>& a, const pair<int,int>& b) {
	if (a.first != b.first) {
		return a.first < b.first;
	} else {
		return a.second > b.second;
	}
}

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int &x: a) {
		cin >> x;
	}
	sort(a, a+n);
	int mi = INT_MAX;
	int imi = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			mi = min(a[i], mi);
			imi = i;
			break;
		}
	}
	if (mi == INT_MAX) {
		cout << n << endl;
		return;
	}
	bool b = false;
	for (int i = 0; i < imi-1; i++) {
		if (abs(a[i] - a[i+1]) < mi) {
			b = true;
		}
	}
	if (b) {
		cout << imi << endl;
	} else {
		cout << imi + 1 << endl;
	}
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

