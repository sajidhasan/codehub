
/*
author: Mohammad Sajid Hasan
domain: devskill, basic geometry
problem name: Box
date: Oct 1, 2016
*/

#include <bits/stdc++.h>
#define pf printf
#define sf scanf

#define REP(i, a, b) for(int i = int(a); i <= int(b); i++)

using namespace std;

int main()
{
    int cases;
    sf("%d", &cases);
    REP(i, 1, cases){
        double a, b, c, r;
        sf("%lf %lf %lf", &a, &b, &c);

        r = sqrt(pow(a, 2)+pow(b, 2)+pow(c, 2));
        pf("%.2lf\n", r);
    }
    return 0;
}

