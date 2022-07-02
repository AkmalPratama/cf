#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		long long a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a+n);
		long long sumR, sumB;
		sumB = a[0];
		sumR = 0;
		int i, j;
		i = 1;
		j = n-1;
		bool stop = false;
		while(i < j) {
			sumB += a[i];
			sumR += a[j];
			if ((sumB < sumR) && !stop) {
				stop = true;
			}
			i++;
			j--;
		}
		if (stop) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}
