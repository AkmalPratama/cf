#include <bits/stdc++.h>
using namespace std;

void solve() {
	vector<string> v;
	for (int i = 0; i < 8; i++) {
		string s;
		cin >> s;
		v.push_back(s);
	}
	int x = 0;
	int y = 0;
	for (int i = 1; i < 7; i++) {
		for (int j = 1; j < 7; j++) {
			if (v[i][j] == '#' &&
			v[i-1][j-1] == '#' &&
			v[i-1][j+1] == '#' &&
			v[i+1][j-1] == '#' &&
			v[i+1][j+1] == '#'
			) {
				x = i + 1;
				y = j + 1;
				break;
			}
		}
	}
	cout << x << " " << y << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

