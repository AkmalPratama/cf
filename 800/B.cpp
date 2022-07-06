#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		long long n;
		string s;
		cin >> n >> s;
		long long cnt = n;
		for (long long i = 1; i < n; i++) {
			if (s[i] != s[i-1])
				cnt += i;
		}
		cout << cnt << endl;
	}
	return 0;
}

