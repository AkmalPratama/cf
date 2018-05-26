#include <iostream>
#include <string>
using namespace std;

int main () {
	string s;
	int len;
	int cnt = 0;
	
	cin >> s;
	len = s.length();
	for (int i = 0; i < len; i++) {
		if (s[i] == 'Q') {
			for (int j = (i+1); j < (len + 1); j++) {
				if (s[j] == 'A') {
					for (int k = (j+1); k < (len + 1); k++) {
						if (s[k] == 'Q') {
							cnt++;
						}
					}
				}
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
