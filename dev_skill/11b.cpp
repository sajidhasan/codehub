#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int testCases;
    scanf("%d", &testCases);

    for(int i = 1; i <= testCases; i++)
    {

        ll n, res;
        scanf("%llu", &n);
        res = (n*(n+1)) / 2;
        printf("%llu\n", res);
    }

    return 0;
}
