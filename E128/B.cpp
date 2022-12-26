#include <bits/stdc++.h>
using namespace std;

bool checkBound(std::vector<std::pair<int,int>>& v, int x, int y) {
	bool b = true;
	for (int i = 0; i < v.size() && b; i++) {
		if (v[i].first - x < 0 || v[i].second - y < 0) {
			b = false;
		}
	}
	return b;
}

void solve() {
	int n, m;
	cin >> n >> m;
	char a[n][m];
	vector<pair<int,int>> v;
	int tRx, tRy;
	int lRx, lRy;
	bool found = false;
	
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++) {
			a[i][j] = s[j];
			if (s[j] == 'R') {
				v.push_back(make_pair(i, j));
			}
		}
	}
	
	for (int i = 0; i < n && !found; i++) {
		for (int j = 0; j < m && !found; j++) {
			if (a[i][j] == 'R') {
				tRx = i;
				tRy = j;
				found = true;
			}
		}
	}
	found = false;
	for (int j = 0; j < m && !found; j++) {
		for (int i = 0; i < n && !found; i++) {
			if (a[i][j] == 'R') {
				lRx = i;
				lRy = j;
				found = true;
			}
		}
	}
	if (lRx == tRx && lRy == tRy) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}

int main() {
    int t;
    cin >> t;
    while (t--) {
    	solve();
	}
    return 0;
}
