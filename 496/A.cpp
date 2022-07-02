#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	
	cin >> n;
	int a[n];
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (i > 0) {
			if (a[i] < a[i-1]) {
				v.push_back(a[i-1]);
			}
			if (a[i] == a[i-1]) {
				v.push_back(1);
			}
		}
		if (i == (n-1)) {
			v.push_back(a[i]);
		}
	}
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++) {
		if (i == 0) {
			cout << v[i];
		} else {
			cout << " " << v[i];
		}
	}
	cout << endl;
	return 0;
}
