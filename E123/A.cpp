#include <algorithm>
#include <iostream>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		bool r, g, b, ans;
		r = false;
		g = false;
		b = false;
		ans = true;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'r') {
				r = true;
			} else if (s[i] == 'g') {
				g = true;
			} else if (s[i] == 'b') {
				b = true;
			} else if ((!r) && (s[i] == 'R')) {
				ans = false;
				break;
			} else if ((!g) && (s[i] == 'G')) {
				ans = false;
				break;
			} else if ((!b) && (s[i] == 'B')) {
				ans = false;
				break;
			}
		}
		if (ans) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
