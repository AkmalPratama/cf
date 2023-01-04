#include <iostream>
#include <string>
using namespace std;

int solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	size_t f = s.find("RL");
	if (f != string::npos) {
		return 0;
	}
	f = s.find("LR");
	if (f != string::npos) {
		return f + 1;
	}
	return -1;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		cout << solve() << endl;
	}
	return 0;
}

