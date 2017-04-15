#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;

    for(int i=0; i<t; i++)
    {
        vector<ll>id;
        ll passes, p1_id;
        cin >> passes >> p1_id;
        id.push_back(p1_id);
        for(ll j=0; j<passes; j++)
        {
            char c;
            cin >> c;cin.clear();
            if(c == 'P')
            {
                ll c_id;
                cin >> c_id;
                id.push_back(c_id);
            }
            else if(c=='B')
            {
                id.push_back(id[id.size()-2]);
            }
        }

        cout << "Player " << id.back() << endl;
    }
}
