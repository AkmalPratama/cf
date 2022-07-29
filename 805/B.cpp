#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >>  s;
		set<char> sc;
		int cnt = 0;
		for (int i = 0; i < s.length(); i++) {
			bool isIn = sc.find(s[i]) != sc.end();
			if (!isIn) {
				if (sc.size() < 3) {
					sc.insert(s[i]);
				} else {
					cnt++;
					sc.clear();
					sc.insert(s[i]);
				}
			}
		}
		cout << cnt+1 << endl;
	}
	return 0;
}

