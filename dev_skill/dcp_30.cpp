#include <bits/stdc++.h>
#define pf printf
#define sf scanf
#define REP(i, a, b) for(int i = int(a); i <= int(b); i++)
typedef long long ll;

using namespace std;

int testCases;
int main()
{
    cin >> testCases;

    REP(i, 1, testCases)
    {
        string line;
        cin >> line;
        cout << "Case " << i << ":" << endl;
        REP(j, 97, 122)
        {
            int occurence = count(line.begin(), line.end(), char(j));
            if (occurence > 0)
                cout << char(j) << " " << occurence << endl;
        }

    }

    return 0;
}

