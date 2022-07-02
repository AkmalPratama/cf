#include <bits/stdc++.h>
using namespace std;

int main () {
	long long n;
	
	cin >> n;
	long long a[n];
	for (long long i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long sum1[n], sum2[n], sum3[n];
	map<long long, long long> m;
	map<long long, long long>::iterator it;
	long long buf = 0;
	for (long long i = 0; i < n; i++) {
		buf += a[i];
		sum1[i] = buf;
		m[buf] = 1;
	}
	buf = 0;

	for (long long i = n-1; i >= 0; i--) {
		buf += a[i];
		sum3[i] = buf;
		it = m.find(buf);
		if (it != m.end()) {
			m[buf] = 2;
		} else {
			m[buf] = 1;
		}
	}

	long long max = 0;
	long long idxMax = 0;
	for (it = m.begin(); it != m.end(); ++it) {
		if ((it->second) >= max && (it->first) != sum1[n-1] && (it->first) <= sum1[n-1]/2) {
			max = it->second;
			idxMax = it->first;
		}
	}
	if (max == 1) {
		cout << 0 << endl;
	} else {
		cout << idxMax << endl;
	}
	return 0;
}
