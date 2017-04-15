#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, l;
    cin >> n;
    queue<int> h;
    for(int i=0; i<n; i++)
    {
        int tmp;
        cin >> tmp;
        h.push(tmp);
    }
    ll q, x, sum=0; cin >> q >> x;
    bool eq = false;
    for(ll j=0; j<q; j++){
        vector<ll> w;
        string cmd;
        cin >> cmd;
        if(cmd == "Harry")
        {
            w.push_back(h.front());
            h.pop();
        }
        else if(cmd=="Remove")
        {
            w.pop_back();
        }


        for(int k=0; k<w.size(); k++)
        {
            sum += w.at(k);
        }
        if(!eq)
        {
            if(sum == x) {
                l = w.size();
                eq = true;
            }
        }

    }
    cout << l << endl;

    return 0;
}

