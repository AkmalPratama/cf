#include <iostream>
#include <string.h>
using namespace std;

int main () {
	string s1, s2;
	string pre1, pre2, ans;
	int cmp1, cmp2;
	
	cin >> s1 >> s2;
	pre1 = s1[0];
	pre2 = s2[0];
	
	int i = 1;
	int j = 0;
	bool stop = false;
	
	while (i <= s1.length() && !stop) {
		cmp1 = s1[i];
		cmp2 = s2[j];
		if (cmp1 < cmp2) {
			pre1 += s1[i];
		} else {
			stop = true;
		}
	}
	cout << pre1+pre2 << endl;
	return 0;
}
