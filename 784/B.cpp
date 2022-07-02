#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		map<int, int> m;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			if (m.find(x) == m.end()) {
				m[x] = 1;
			} else {
				m[x] += 1;
			}
		}
		bool found = false;
		for (map<int,int>::iterator it = m.begin(); it != m.end(); it++) {
			if (it->second > 2) {
				cout << it->first << endl;
				found = true;
				break;
			}
		}	
		if (!found) {
			cout << -1 << endl;
		}
	}
	return 0;
}

