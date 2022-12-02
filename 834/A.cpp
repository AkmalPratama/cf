#include <bits/stdc++.h>
using namespace std;

void solve(string y) {
	string s;
	cin >> s;
	size_t found = y.find(s);
	if (found != string::npos) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
}

int main () {
	int t;
	cin >> t;
	string yes = "";
	for (int i = 0; i < 18; i++) {
		yes += "Yes";
	}
	while (t--) {
		solve(yes);
	}
	return 0;
}

