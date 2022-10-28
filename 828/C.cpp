#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	char c;
	cin >> n >> c;
	string s;
	cin >> s;
	if (c == 'g') {
		cout << 0 << endl;
		return;
	}
	vector<int> v, vg;
	for (int i = 0; i < n; i++) {
		if (s[i] == c) {
			v.push_back(i);
		}
		if (s[i] == 'g') {
			vg.push_back(i);
		}
	}
	
	int id, idx;
	id = 0;
	idx = 0;
	vector<int> dist;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] < vg[idx] && idx < vg.size()) {
			dist.push_back(vg[idx] - v[i]);
		} else {
			while (v[i] > vg[idx] && idx < vg.size()) {
				idx++;
			}
			if (idx >= vg.size()) {
				dist.push_back(n + vg[0] - v[i]);
			} else {
				dist.push_back(vg[idx] - v[i]);
			}
		}
	}
	
	int max = 0;
	for (int i = 0; i < dist.size(); i++) {
		if (max < dist[i]) {
			max = dist[i];
		}
	}
	cout << max << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

