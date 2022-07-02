#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
    	int n;
    	cin >> n;
    	int a0, an;
    	for (int i = 0; i < n; i++) {
    		int x;
    		cin >> x;
    		if (i == 0) {
    			a0 = x;
			}
			if (i == n-1) {
    			an = x;
			}
		}
		int opt = a0 + n;
		if (opt-1 <= an && an <= opt+1) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
    return 0;
}
