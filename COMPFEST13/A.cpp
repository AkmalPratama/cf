#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<pair<string,int>> v;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++) {
			if (j % 2) {
				s[j] = abs('[' - s[j]);
			}
		}
		//cout << s << endl;
		v.push_back(make_pair(s, i+1));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		cout << v[i].second << ' ';
	}
	cout << endl;
}

int main () {
	solve();
	return 0;
}
