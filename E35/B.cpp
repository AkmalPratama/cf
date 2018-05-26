#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	int n, a, b;
	int max_piece, min_piece;
	
	cin >> n >> a >> b;
	max_piece = max(a, b);
	min_piece = min(a, b);
	if (max_piece <= n) {
		cout << 1 << endl;
	} else {
		bool cek = true;
		int piece = 1;
		int ap, bp;
		while (cek) {
			ap = a / piece;
			bp = b / piece;
			if ((ap + bp) < n) {
				cek = false;
			}
			piece++;
		}
		cout << piece-2 << endl;
	}
	return 0;
}
