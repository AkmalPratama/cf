#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	string s;
	
	cin >> n;
	cin >> s;
	for (int i = 0; i < n; i++) {
		if ((n % (i+1)) == 0) {
			for (int j = 0; j < ((i+1)/2); j++) {
				char temp;
				temp = s[j];
				s[j] = s[i-j];
				s[i-j] = temp;
			}
			//cout << s << endl;
		}
	}
	cout << s << endl;
	return 0;
}
