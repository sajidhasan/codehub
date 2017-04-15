#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    int q;
    cin >> q;

    for(int i=0; i<q; i++)
    {
        int left, right, res;
        cin >> left >> right;
        if(left&1) res = left;
        else res = left^1;
        left++;

        for(int k=left; k<=right; k++)
        {
            if (k&1) res= res^k;
            else res=res^1;
        }

        cout << res << endl;
    }
    return 0;
}

