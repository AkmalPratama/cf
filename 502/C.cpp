#include <bits/stdc++.h>

using namespace std;

int main () {
	long long n, m;
	
	cin >> n >> m;
	long long a[n], b[n], c[n];
	long long sum = 0, sumAll = 0;
	for (long long i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		sum += b[i];
		sumAll += a[i];
		c[i] = a[i] - b[i];
	}
	if (sum > m) {
		cout << -1 << endl;
	} else {
		if (sumAll <= m) {
			cout << 0 << endl;
		} else {
			sort(c, c+n, greater<long long>());
			long long d[n];
			long long sumSub = 0;
			for (long long i = 0; i < n; i++) {
				sumSub += c[i];
				d[i] = sumSub;
			}
			for (long long i = 0; i < n; i++) {
				if ((sumAll - d[i]) <= m) {
					cout << i+1 << endl;
					break;
				}
			}
		}
	}
	return 0;
}
