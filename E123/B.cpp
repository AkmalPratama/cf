#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
    while (t--) {
    	int n;
    	cin >> n;
    	int a[n];
		a[0] = n;
		for (int i = 1; i < n; i++) {
			a[i] = a[i-1] - 1;
		}
    	for (int i = 0; i < n; i++) {
    		for (int j = 0; j < n; j++) {
    			if (j == 0) {
    				cout << a[j];
				} else {
					cout << " " << a[j];
				}
			}
			if (i < n - 1) {
				swap(a[n-1-i], a[n-2-i]);
			}
			cout << endl;
		}
	}
    return 0;
}
