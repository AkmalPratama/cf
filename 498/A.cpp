#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] % 2 == 0) {
			a[i]--;
		}
	}
	cout << a[0];
	for (int i = 1; i < n; i++) {
		cout << " " << a[i];
	}
	cout << endl;
	return 0;
}
