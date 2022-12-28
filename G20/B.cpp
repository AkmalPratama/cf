#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int sum = 0;
		if (s.length() == 1 || s[s.length()-1] != 'B') {
			cout << "NO" << endl;
			continue;
		} else {
			for (int i = 0; i < s.length() && sum >= 0; i++) {
				if (s[i] == 'A') {
					sum++;
				} else {
					sum--;
				}
			}
		}
		if (sum < 0) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
		}
	}
	return 0;
}
