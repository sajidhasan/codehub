#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int c; cin >> c;
        //vector<int> n;
        map<double, string> m;
        map<double, string>::iterator it;
        char line[100000];
        char* s;

        gets(line);

        for(int j=0; j<c; j++)
        {
            double st = strtod(line, &s);
            m[st] = line.substr(s);
        }

        while(it)
        {
            cout << it->second << endl;
        }


    }
    return 0;
}


