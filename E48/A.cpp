#include <bits/stdc++.h>
using namespace std;

int main () {
	int n, m;
	
	cin >> n >> m;
	long long a[n], b[n], c[n];
	long long sum = 0;
	vector<long long> v;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		b[i] = sum;
		if (i == 0) {
			long long buf = a[i] / m;
			v.push_back(buf);
			c[i] = buf;
		} else {
			long long buf = b[i] / m;
			c[i] = buf;
			buf -= c[i-1];
			v.push_back(buf);
		}
	}
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			cout << v[i];
		} else {
			cout << " " << v[i];
		}
	}
	cout << endl;
	return 0;
}
