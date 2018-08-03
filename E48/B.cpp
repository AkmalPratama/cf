#include <bits/stdc++.h>
using namespace std;

int main () {
	int n, m, q;
	string s, t;
	int a, b;
	vector<int> v;
	
	cin >> n >> m >> q;
	cin >> s >> t;
	for (int i = 0; i < (n-m+1); i++) {
		bool same = true;
		for (int j = 0; j < m; j++) {
			same = (s[i+j] == t[j]);
			if (!same) {
				break;
			}
			if (j == (m-1)) {
				v.push_back(i);
			}
		}
	}
	for (int i = 0; i < q; i++) {
		if (n < m) {
			cout << 0 << endl;
		} else {
			cin >> a >> b;
			a--;
			b--;
			int cnt = 0;
			for (int j = 0; j < v.size(); j++) {
				if (a <= v[j] && v[j] <= b && (v[j] + m -1) <= b) {
					cnt++;
				}
			}
			cout << cnt << endl;
		}
	}
	return 0;
}
