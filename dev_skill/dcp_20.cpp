/*
author: Mohammad Sajid Hasan
domain: devskill
problem name: DCP - 20
date: Oct 9, 2016
*/

#include <bits/stdc++.h>
#define pf printf
#define sf scanf

#define REP(i, a, b) for(int i = int(a); i <= int(b); i++)
using namespace std;

int tc;

int main()
{
    sf("%d", &tc);
    REP(i, 1, tc){
        double cx, cy, r, px, py, d;
        sf("%lf %lf %lf %lf %lf", &cx, &cy, &r, &px, &py);
        d = sqrt(pow((cx - px), 2) + pow((cy - py), 2));
        if (d == r) pf("Case %d: OnCircle\n", i);
        else{
            d > r ? pf("Case %d: Outside\n", i) : pf("Case %d: Inside\n", i);
        }
    }

    return 0;
}
