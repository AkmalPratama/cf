#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, k, buf;
	bool b = false;
	cin >> n >> k;
	vector<int> v;

	for (int i = 0; i < n; i++) {
		cin >> buf;
		v.push_back(buf);
		if (buf > k) {
			b = true;
		}
	}
	int ctr = 0;
	while (v[ctr] <= k) {
		ctr++;
	}
	int ctr_end = 0;
	while (v[v.size() - 1 - ctr_end] <= k) {
		ctr_end++;
	}
	if (b) {
		cout << ctr + ctr_end << endl;
	} else {
		cout << v.size() << endl;
	}
	return 0;
}
