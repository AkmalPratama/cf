#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	ll t[n], d[n];
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> d[i];
	}
	vector<ll> fire;
	vector<ll> frost;
	for (int i = 0; i < n; i++) {
		if (t[i] == 0) {
			fire.push_back(d[i]);
		} else {
			frost.push_back(d[i]);
		}
	}
	ll total = 0;
	sort(fire.begin(), fire.end(), greater<ll>());
	sort(frost.begin(), frost.end(), greater<ll>());
	int k = min(fire.size(), frost.size());
	if (fire.size() < frost.size()) {
		for (int i = 0; i < k; i++) {
			total += 2 * fire[i];
			total += 2 * frost[i];
		}
		for (int i = k; i < frost.size(); i++) {
			total += frost[i];
		}
	} else {
		for (int i = 0; i < k; i++) {
			total += 2 * fire[i];
			total += 2 * frost[i];
		}
		for (int i = k; i < fire.size(); i++) {
			total += fire[i];
		}
		if (fire.size() == frost.size()) {
			total -= min(fire.back(), frost.back());
		}
	}
	cout << total << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

