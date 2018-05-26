#include <iostream>
#include <string>
using namespace std;

int main() {
	string s, t;
	
	cin >> s;
	cin >> t;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == t[i]){
			cout << '0';
		} else {
			cout << '1';
		}
	}
	cout << endl;
	return 0;
}
