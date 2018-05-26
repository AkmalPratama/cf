#include <iostream>
using namespace std;

int main () {
	int a,b,c,i;
    scanf("%d %d %d",&a,&b,&c);
    char kar = c+'0';
    string ans = to_string((double)a/(double)b);
    printf("ans: "); cout<<ans<<endl;
	return 0;
}
