#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<vector<int>> v(n, vector<int>(m));
		for (int i = 0; i < n; i++) {
			string s;
			cin >> s;
			for (int j = 0; j < m; j++) {
				v[i][j] = s[j] - '0';
			}
		}
		bool stop = false;
		int ii = 0;
		while (ii < n-1 && !stop) {
			int jj = 0;
			while (jj < m-1 && !stop) {
				int x = v[ii][jj] + v[ii+1][jj] + v[ii][jj+1] + v[ii+1][jj+1];
				if (x == 3) {
					stop = true;
				}
				jj++;
			}
			ii++;
		}
		if (stop) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
		}
	}
	return 0;
}

