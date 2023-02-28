#include <bits/stdc++.h>
#define ll long long
using namespace std;

int f(int a, int b) {
	return (a + b - 1) / b;
}

void solve() {
	int n;
	cin >> n;
	int a[n];
	int mn = INT_MAX;
	int imn = -1;
	bool b = false, is1 = false;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] == 1) {
			is1 = true;
		}
		if (a[i] < mn) {
			mn = a[i];
			imn = i;
		}
	}
	for (int i = 1; i < n; i++) {
		if (a[i] != a[i+1]) {
			b = true;
			break;
		}
	}
	if (!b) {
		cout << 0 << endl;
		return;
	}
	if (is1) {
		cout << -1 << endl;
		return;
	}
	vector<pair<int, int>> v;
	while(1) {
		for (int i = 1; i <= n; i++) {
			if (a[i] > mn) {
				a[i] = f(a[i], mn);
				v.push_back(make_pair(i, imn));
			}
		}
		int cnt = 0;
		mn = a[n];
		imn = n;
		for (int i = 1; i < n; i++) {
			if (a[i] == a[i+1]) {
				cnt++;
			}
			if (mn > a[i]) {
				mn = a[i];
				imn = i;
			}
		}
		if (cnt == n-1) {
			break;
		}
	}
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << " " << v[i].second << endl;
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

