#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		if (s == "yes") {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
		cout << s << endl;
	}
	return 0;
}

