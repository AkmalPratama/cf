#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		string s, t;
		cin >> s >> t;
		bool b = true;
		for (int i = 1; i < m; i++) {
			if (s[n-m+i] != t[i]) {
				b = false;
				break;
			}
		}
		if (b) {
			if (s[n-m] == t[0]) {
				cout << "YES\n";
			} else {
				bool bb = false;
				for (int i = 0; i < n-m; i++) {
					if (s[i] == t[0]) {
						bb = true;
						break;
					}
				}
				if (bb) {
					cout << "YES\n";
				} else {
					cout << "NO\n";
				}
			}
		} else {
			cout << "NO\n";
		}
		
	}
	return 0;
}
