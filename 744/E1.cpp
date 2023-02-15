#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	deque<int> d;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	d.push_back(v[0]);
	for (int i = 1; i < n; i++) {
		if (d.front() > v[i]) {
			d.push_front(v[i]);
		} else {
			d.push_back(v[i]);
		}
	}
	for (int i: d) {
		cout << i << " ";
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
