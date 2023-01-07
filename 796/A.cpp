#include <bits/stdc++.h>
using namespace std;

int solve() {
	int n;
	cin >> n;
	if (n == 1) {
		return 3;
	}
	if (n % 2 == 1) {
		return 1;
	}
	if (ceil(log2(n)) == floor(log2(n))) {
		return n+1;
	}
	int ans = 1;
	while (n % 2 == 0) {
		ans *= 2;
		n /= 2;
	}
	return ans;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		cout << solve() << endl;
	}
	return 0;
}

