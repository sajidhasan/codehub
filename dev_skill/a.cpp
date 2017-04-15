#include <bits/stdc++.h>
#define pf printf
#define sf scanf

#define REP(i, a, b) for(int i = int(a); i <= int(b); i++)

using namespace std;

int tc;
long n;

int main()
{
    sf("%d", &tc);
    REP(i, 1, tc){
        sf("%d", &n);
        n=pow((n*(n+1))/2, 2);
        pf("Case %d: %lu\n", i, n);
    }

    return 0;
}

