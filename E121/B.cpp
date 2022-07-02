#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
    	string s;
    	cin >> s;
    	int n;
    	bool check = false;
    	for (int i = s.length()-1; i > 0; i--) {
    		n = int(s[i]) + int(s[i-1]) - 96;
    		if (n > 9) {
    			cout << s.substr(0,i-1);
    			cout << to_string(n);
    			if ((i+1) <= s.length()-1) {
    				cout << s.substr(i+1);
				}
				cout << endl;
				check = true;
				break;
			}
		}
		if (!check) {
			cout << int(s[0]) + int(s[1]) - 96;
			if (2 <= s.length()-1) {
				cout << s.substr(2);
			}
			cout << endl;
		}
	}
    return 0;
}
