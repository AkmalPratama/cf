#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, k;
	vector<int> v_elem, v_idx;
	vector<int>::iterator it;
	
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (v_elem.empty()) {
			v_elem.push_back(a[i]);
			v_idx.push_back(i);
		} else {
			it = find(v_elem.begin(), v_elem.end(), a[i]);
			if (it == v_elem.end()) {
				v_elem.push_back(a[i]);
				v_idx.push_back(i);
			}
		}
	}
	if (v_elem.size() < k) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
		for (int i = 0; i < k; i++) {
			cout << v_idx[i] + 1 << endl;
		}
	}
	return 0;
}
