#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		int cnt = 0;
		string s;
		cin >> n;
		cin >> s;
		vector<int> v, w;
		for (int i = 0; i < n; i++) {
			if (s[i] != s[i+1]) {
				v.push_back(i+1);
			}
		}
		for (int i = 0; i < v.size(); i++) {
			if (i != 0) {
				w.push_back(v[i] - v[i-1]);
			} else {
				w.push_back(v[i]);
			}
		}
		for (int i = 0; i < w.size(); i++) {
			if (w[i]%2 == 1) {
				cnt++;
				w[i+1]++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

