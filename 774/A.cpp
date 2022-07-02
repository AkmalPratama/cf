#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		long long n, s;
		cin >> n >> s;
		long long n2 = n * n;
		cout << s / n2 << endl;
	}
	return 0;
}

