#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int t;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> t;
    for(int i = 1; i<= t; i++)
    {
        int b;
        cin >> b;
        ull p,m_c;
        cin >> p >> m_c;
        for(int j = 1; j < b; j++)
        {
            ull price, m_cost;
            cin >> price >> m_cost;
            if(price < p) {p = price; m_c = m_cost;}
            if(price == p)
            {
                if(m_cost < m_c)
                    p = price; m_c = m_cost;
            }

        }
        cout << "Case " << i << ": " << p << " " << m_c << endl;
    }
    return 0;
}

