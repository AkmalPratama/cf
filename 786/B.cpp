#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int x = s[1] - '`';
		if (s[0] < s[1]) {
			x = s[1] - '`' - 1;
		}
		cout << (s[0] - 'a') * 25 + x << endl;
	}
	return 0;
}

