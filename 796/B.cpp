#include <bits/stdc++.h>
#define ll long long
using namespace std;

int div2Odd(int x) {
	int buff = x;
	int n = 0;
	while(buff % 2 == 0) {
		n++;
		buff /= 2;
	}
	return n;
}

int solve() {
	int n;
	cin >> n;
	int even = 0;
	bool b = false;
	int x, minDivOdd;
	minDivOdd = -1;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x % 2 == 0) {
			even++;
			if (minDivOdd < 0) {
				minDivOdd = div2Odd(x);
			}
			minDivOdd = min(minDivOdd, div2Odd(x));
		}
	}
	return (even < n ? even : (minDivOdd + even - 1));
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		cout << solve() << endl;
	}
	return 0;
}

