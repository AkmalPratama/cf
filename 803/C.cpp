#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		map<int,bool> m;
		int n;
		int posCnt = 0, negCnt = 0, zeroCnt = 0;
		cin >> n;
		long long a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			m[a[i]] = true;
			if (a[i] > 0) {
				posCnt++;
			}
			if (a[i] < 0) {
				negCnt++;
			}
			if (a[i] == 0) {
				zeroCnt++;
			}
		}
		vector<int> v;
		if (zeroCnt > 3) {
			v.push_back(0);
			v.push_back(0);
			v.push_back(0);
			for (int i = 0; i < n; i++) {
				if (a[i] != 0) {
					v.push_back(a[i]);
				}
			}
		} else {
			for (int i = 0; i < n; i++) {
				v.push_back(a[i]);
			}
		}
		if ((posCnt > 2) || (negCnt > 2)) {
			cout << "NO" << endl;
		} else {
			int sum;
			bool b = true;
			n = v.size();
			for (int i = 0; i < n; i++) {
				for (int j = i+1; j < n; j++) {
					for (int k = j+1; k < n; k++) {
						sum = v[i] + v[j] + v[k];
						if (m.find(sum) == m.end()) {
							b = false;
						}
					}
				}
			}
			if (b) {
				cout << "YES\n";
			} else {
				cout << "NO\n";
			}
		}
	}
	return 0;
}

