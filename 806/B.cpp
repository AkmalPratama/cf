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
		set<char> sc;
		for (int i = 0; i < s.length(); i++) {
			bool isIn = sc.find(s[i]) != sc.end();
			if (isIn) {
				cnt++;
			} else {
				cnt += 2;
				sc.insert(s[i]);
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

