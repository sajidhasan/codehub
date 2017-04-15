//solved

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    for(int i = 1; i <= tc; i++)
    {
        int n;
        double dep,tot=0;
        cin >> n;
        vector<double> price(n), qnty(n);
        for(int j = 0; j < n; j++)
        {
            cin >> price[j] >> qnty[j];
            tot += (price[j] * qnty[j]);

        }
        cin >> dep;

        cout << "Case " << i << ": " << floor(dep - tot) << endl;
    }
    return 0;
}
