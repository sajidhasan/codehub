/*
author: Mohammad Sajid Hasan
domain: devskill
problem name: DCP - 26
date: Oct 10, 2016
*/

#include <bits/stdc++.h>
#define pf printf
#define sf scanf
#define REP(i, a, b) for(int i = int(a); i <= int(b); i++)
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    cin.ignore();

    REP(i, 1, tc)
    {
        string text;
        getline(cin, text);
        reverse(text.begin(), text.end());
        cout << text << endl;

    }
    return 0;
}
