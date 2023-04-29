#include <bits/stdc++.h>
using namespace std;

bool comp(const pair<int,int> &a, const pair<int,int> &b) {
	if (a.first == b.first) {
		return a.second > b.second;
	} else {
		return a.first < b.first;
	}
}

void solve() {
	int n;
	cin >> n;
	vector<pair<int,int>> v;
	for (int i = 0; i < n; i++) {
		int b, d;
		cin >> b >> d;
		v.push_back(make_pair(d, b));
	}
	sort(v.begin(), v.end(), comp);
	int diff = 1, ans = 0;
	for (int i = 0; i < n; i++) {
		if (v[i].first == diff) {
			ans += v[i].second;
			diff++;
		}
	}
	if (diff == 11) {
		cout << ans << endl;
	} else {
		cout << "MOREPROBLEMS\n";
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
