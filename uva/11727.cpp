#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    for(int i = 1; i <= testCases; i++)
    {
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        cout << "Case " << i<< ": " << v[1] << endl;
    }

    return 0;
}
