#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
	int n, d;
	
	cin >> n >> d;
	int x[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	sort(x, x+n);
	
	int beg, end;
	int cnt = 0;
	
	beg = 0;
	end = n-1;
	int j;
	for (int i = 0; i < n; i++) {
		j = i;
		while ((j < n) && (x[j] <= (x[i] + d))) {
			//cout << x[j] << " " << x[i] + d << endl;
			j++;
		}
		if (cnt < (j-i)) {
			cnt = j;
		}
		//cout << cnt << endl;
	}
	cout << (n - cnt) << endl;
}
