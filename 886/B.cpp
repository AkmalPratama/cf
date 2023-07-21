#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool foo(const pair<int,int> &a, const pair<int,int> &b) {
	return a.second > b.second;
}

void solve() {
	int n;
	cin >> n;
	vector<pair<int,int>> v, w;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y));
		w.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end(), foo);
	int q;
	for (int i = 0; i < n; i++) {
		if (v[i].first <= 10) {
			q = v[i].second;
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		if (w[i].second == q) {
			cout << i+1 << endl;
			return;
		}
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

