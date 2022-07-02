#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, k;
	
	cin >> n >> k;
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b+n);
	int sum = 0;
	vector<int> v;
	for (int i = 0; i < k; i++) {
		sum += b[n-1-i];
		v.push_back(b[n-1-i]);
	}
	cout << sum << endl;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			
		}
	}
	cout << n/k << endl;;
	return 0;
}

