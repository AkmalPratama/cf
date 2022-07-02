#include <bits/stdc++.h>
using namespace std;


int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int cnt = 0;
		if (n % 2 == 0) {
			int i = n / 2 - 1;
			while (i >= 0 && (s[i] == s[n/2])) {
				cnt += 2;
				i--;
			}
		} else {
			cnt++;
			int i = n / 2 - 1;
			while (i >= 0 && (s[i] == s[n/2])) {
				cnt += 2;
				i--;
			}
		}
		cout << cnt << endl;
		
	}
	return 0;
}

