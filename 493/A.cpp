#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	
	cin >> n;
	int a[n], sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	vector<int> v;
	if (n == 1) {
		cout << -1 << endl;
	} else if (n == 2) {
		if (a[0] == a[1]) {
			cout << -1 << endl;
		} else {
		  cout << 1 << endl;
			cout << 1 << endl;
		}
	} else {
		int buf, grig;
		buf = 0;
		v.push_back(buf);
		grig += a[buf];
		while (grig == (sum - grig)) {
			buf++;
			v.push_back(buf);
			grig += a[buf];
		}
		cout << v.size() << endl;
		cout << v[0] + 1;
		for (int i = 1; i < v.size(); i++) {
			cout << " " << v[i] + 1;
		}
		cout << endl;
	}
	return 0;
}
