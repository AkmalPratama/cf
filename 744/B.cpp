#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	vector<pair<int,int>> ans;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n-1; i++) {
		int minE = v[i];
		int minI = i;
		for (int j = i+1; j < n; j++) {
			if (v[j] < minE) {
				minE = v[j];
				minI = j;
			}
		}
		if (i != minI) {
			ans.push_back(make_pair(i, minI));
			for (int j = minI; j >= i+1; j--) {
				v[j] = v[j-1];
			}
			v[i] = minE;
		}
	}
	cout << ans.size() << endl;
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i].first + 1 << " " << ans[i].second + 1 << " " << ans[i].second - ans[i].first << endl;
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
