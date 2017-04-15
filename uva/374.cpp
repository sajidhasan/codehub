#include <bits/stdc++.h>
#define pf printf
#define sf scanf
#define REP(i, a, b) for(int i = int(a); i <= int(b); i++)

typedef long long ll;

using namespace std;


int mod(int x, int y, int z)
{
    if(y == 0)
        return 1;

    if(y % 2 == 0)
    {
        int a = mod(x, y/2,z);
        return (a*a)%z;
    }
    else return (x % z * mod(x,y-1,z))%z;
}


int main(){

    int B,P,M;

    while(cin>>B>>P>>M)
        cout<<mod(B,P,M)<<endl;

	return 0;
}
