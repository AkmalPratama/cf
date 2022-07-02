#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		int ctr = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			for (int j = i+1; j < n; j++) {
				if (a[i] < a[j]) {
					i = j-1;
					break;
				} else {
					ctr++;
					i = j;
					break;
				}
			}
		}
		cout << ctr << endl;
		
	}
	return 0;
}

