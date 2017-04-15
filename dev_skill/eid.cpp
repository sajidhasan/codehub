#include<bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;

int main()
{
    int date;
    sf("%d", &date);
    pf("%s\n", (date == 29 || date == 30)? "YES" : "NO");
    /*if(date == 29 || date == 30)
        cout << "YES" << endl;
    else cout << "NO" << endl;
	*/
	return 0;
}
