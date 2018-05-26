#include <iostream>
using namespace std;

string foo(int n) {
	if (n == 0) {
		return "What are you doing at the end of the world? Are you busy? Will you save us?";
	} else {
		return "What are you doing while sending \"" + foo(n-1) + "\"? Are you busy? Will you send \"" + foo(n-1) + "\"?";
	}
	
}

int main () {
	string s;
	int n, k, q;
	
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> n >> k;
		s = foo(n);
		if ((k-1) <= s.length()) {
			cout << s[k-1];
		} else {
			cout << ".";
		}
		//cout << s;
	}
	cout << endl;
	return 0;
}
