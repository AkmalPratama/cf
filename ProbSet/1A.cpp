#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	int n, m, a;
	int mini, maxi;
	cin >> n >> m >> a;
	mini = min(n, m);
	maxi = max(n, m);
	int wid = ((mini % a) == 0) ? (mini / a) : (mini / a + 1);
	int len = ((maxi % a) == 0) ? (maxi / a) : (maxi / a + 1);
	cout << wid * len << endl;
	return 0;
}
