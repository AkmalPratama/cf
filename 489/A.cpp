#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	cin >> n;
	int a[n];
	bool b = false;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 0) {
			b = true;
		}
	}
	size_t len = sizeof(a) / sizeof(a[0]);
	unordered_set<int> s(a, a+len);
	if (b) {
		cout << s.size()-1 << endl;
	} else {
		cout << s.size() << endl;
	}
	return 0;
}
