#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> v;
		for (int i = 0; i < n; i++) {
			int e;
			cin >> e;
			v.push_back(e);
		}
		reverse(v.begin(), v.end());
		int target = v.front();
		int ans = 0;
		int k = 0;
		for (int i = 1; i < n; i++) {
			if (v[i] != target) {
				ans++;
				i += i - 1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
