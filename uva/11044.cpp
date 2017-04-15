#include <bits/stdc++.h>
#define REP(i, a, b) for(int i = int(a); i <= int(b); i++)
typedef long long ll;

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    REP(i, 1, testCases)
    {
        int row, column;
        cin >> row >> column;
        cout << (row/3) * (column/3) << endl;
    }
    return 0;
}

