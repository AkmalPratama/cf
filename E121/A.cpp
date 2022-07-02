#include <algorithm>
#include <iostream>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		string ans = s;
		sort(ans.begin(), ans.end());
		cout << ans << endl;
	}
	return 0;
}
