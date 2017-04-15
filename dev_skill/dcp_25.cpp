/*
author: Mohammad Sajid Hasan
domain: devskill
problem name: DCP - 25
date: Oct 10, 2016
*/

#include <bits/stdc++.h>
#define pf printf
#define sf scanf
#define REP(i, a, b) for(int i = int(a); i <= int(b); i++)

using namespace std;

bool isPalindrome(string text)
{
    bool b = true;
    string temp = text;
    reverse(temp.begin(), temp.end());
    for(string::size_type j = 0; j < text.length(); j++){
        text[j] = tolower (text[j]);
        temp[j] = tolower (temp[j]);
        if(text[j] != temp[j])
            b = false;
    }
    return b;
}

int main()
{
    int tc;
    sf("%d", &tc);

    REP(i, 1, tc)
    {
        string text;
        cin >> text;
        isPalindrome(text) ? pf("Yes\n") : pf("No\n");

    }
    return 0;
}

