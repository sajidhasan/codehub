#include <bits/stdc++.h>
#define pf printf
#define sf scanf
#define REP(i, a, b) for(int i = int(a); i <= int(b); i++)
#define TRvi(c, it) for (vi::iterator it = (c).begin(); it != (c).end(); it++)
typedef long long ll;

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    REP(i, 1, testCases)
    {
        int n, high_count = 0, low_count = 0;
        cin >> n;
        int ar[n];
        REP(j, 0, n-1)
            cin >> ar[j];

        REP(k, 0, n-2)
        {
            if(ar[k] < ar[k+1]) high_count++;
            if(ar[k] > ar[k+1]) low_count++;
        }

        cout << "Case " << i << ": " << high_count << " " << low_count << endl;
    }
    return 0;
}

