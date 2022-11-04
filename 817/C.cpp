#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<vector<string>> v;
	map<string, int> m;
	for (int i = 0; i < 3; i++) {
		vector<string> buf;
		for (int j = 0; j < n; j++) {
			string s;
			cin >> s;
			buf.push_back(s);
			if (m.count(s) > 0) {
				m[s] = m[s] + 1;
			} else {
				m[s] = 1;
			}
		}
		v.push_back(buf);
	}
	vector<int> res;
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			if (m[v[i][j]] == 1) {
				sum += 3;
			} else if (m[v[i][j]] == 2) {
				sum += 1;
			}
		}
		res.push_back(sum);
	}
	for (int i = 0; i < res.size(); i++) {
		if (i == 0) {
			cout << res[i];
		} else {
			cout << " " << res[i];
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

