#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, m;
	
	cin >> n >> m;
	bool a[m+1];
	fill_n(a, m+1, false);
	for (int i = 0; i < n; i++) {
		int l, r;
		cin >> l >> r;
		for (int i = l; i <= r; i++) {
			a[i] = true;
		}
	}
	vector<int> v;
	for (int i = 1; i <= m; i++) {
		if (!a[i]) {
			v.push_back(i);
		}
	}
	cout << v.size() << endl;
	if (v.size() > 0) {
		cout << v[0];
		for (int i = 1; i < v.size(); i++) {
			cout << " " << v[i];
		}
		cout << endl;
	}
	return 0;
}
