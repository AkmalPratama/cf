#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	
	cin >> n;
	int a[n+1];
	int b[100+1];
	for (int i = 1; i <= 100; i++) {
		b[i] = 0;
	}
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[a[i]]++;
	}
	int max = 0;
	for (int i = 1; i <= 100; i++) {
		if (max < b[i]) {
			max = b[i];
		}
	}
	cout << max << endl;
	return 0;
}
