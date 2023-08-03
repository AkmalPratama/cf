#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool f(const pair<int,int> &a, const pair<int,int> &b) {
	if (a.first == b.first) {
		return a.second < b.second;
	} else {
		return a.first > b.first;
	}
}

void solve() {
	int n, k;
	cin >> n >> k;
	vector<pair<int,int>> v;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(make_pair(x % k, i));
	}
	sort(v.begin(), v.end(), f);
	for (int i = 0; i < n; i++) {
		if (v[i].first == 0) {
			cout << v[i].second  + 1<< ' ';
		}
	}
	for (int i = 0; i < n; i++) {
		if (v[i].first != 0) {
			cout << v[i].second + 1 << ' ';
		}
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

