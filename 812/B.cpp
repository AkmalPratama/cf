#include <bits/stdc++.h>
using namespace std;

string solve() {
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int buf;
		cin >> buf;
		v.push_back(buf);
	}
	if (n < 3) {
		return "YES";
	} else {
		int maxE = *max_element(v.begin(), v.end());
		int maxIdx = max_element(v.begin(), v.end()) - v.begin();
		for (int i = maxIdx+1; i < n; i++) {
			if (i > 0) {
				if (v[i] > v[i-1]) {
					return "NO";
				}
			}
		}
		for (int i = maxIdx-1; i >= 0; i--) {
			if (i < n-1) {
				if (v[i] > v[i+1]) {
					return "NO";
				}
			}
		}
		return "YES";
	}
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		cout << solve() << endl;
	}
	return 0;
}

