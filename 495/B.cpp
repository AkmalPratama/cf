#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, m;
	int l, r;
	
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> l >> r;
	}
	string s = "";
	for (int i = 0; i < n; i++)
		s += (i % 2) ? "0" : "1";
	cout << s << endl;
	return 0;
}

