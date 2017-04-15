//solved

/*
author: Mohammad Sajid Hasan
domain: devskill
problem name: DCP - 27
date: Oct 10, 2016
*/

#include <bits/stdc++.h>
#define pf printf
#define sf scanf
#define REP(i, a, b) for(int i = int(a); i < int(b); i++)
using namespace std;

bool isPrime(int n)
{
    bool b = true;
    if (n == 0 || n == 1) return false;
    REP(i, 2, n)
    {
        if (n % i == 0){
            b = false;
            return b;
        }
        else continue;
    }
    return b;
}

int main()
{
    int tc, n;
    sf("%d", &tc);
    REP(i, 0, tc){
        sf("%d", &n);
        isPrime(n) ? pf("Yes\n") : pf("No\n");
    }
    return 0;
}

