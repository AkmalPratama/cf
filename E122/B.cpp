#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
    	int n1 = 0;
    	int n0 = 0;
    	string s;
    	cin >> s;
    	for (int i = 0; i < s.size(); i++) {
    		if (s[i] == '1') {
    			n1++;
			} else {
				n0++;
			}
		}
		if (n1 == n0) {
			cout << n1 - 1 << endl;
		} else {
			cout << min(n1, n0) << endl;
		}
	}
    return 0;
}
