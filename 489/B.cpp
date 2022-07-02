#include <bits/stdc++.h>

using namespace std;

int main () {
	long long l, r, x, y;
	long long cnt = 0;
	cin >> l >> r >> x >> y;
	
	long long xy = x * y;
	long long n;
	if (x == y && l <= x && x <= r) {
		cout << 1 << endl;
	} else {
		for (long long i = 1; (i*i) <= xy; i++) {
			if ((xy % i) == 0) {
				n = xy / i;
				if (__gcd(i, n) == x
					&& (l <= i)
					&& (n <= r)
				) {
					if (n != i) {
						cnt += 2;
					} else {
						cnt++;
					}
				}
				//cout << i << " " << n << endl;
			}
			//cout << xy << endl;
		}
		cout << cnt << endl;
	}
	return 0;
}
