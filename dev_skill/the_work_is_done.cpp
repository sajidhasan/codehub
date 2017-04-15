
/*
author: Mohammad Sajid Hasan
domain: devskill, ad-hoc
problem name: Great!!! The Work Is Done
date: Oct 1, 2016
*/

#include <bits/stdc++.h>
#define pf printf
#define sf scanf

#define REP(i, a, b) for(int i = int(a); i <= int(b); i++)

using namespace std;

int main()
{
    int hours, members, days = 1;
    sf("%d %d", &hours, &members);
    int a_hrs[members], t_hrs = 0;
    REP(i, 0, members-1){
        sf("%d", &a_hrs[i]);
        t_hrs += a_hrs[i];
    }

    if(t_hrs >= hours)
        pf("Project will finish within %d day.\n", days);
    else if(hours > t_hrs)
    {
        if (hours % t_hrs == 0)
            pf("Project will finish within %d days.\n", hours/t_hrs);
        else
            pf("Project will finish within %d days.\n", hours/t_hrs+1);
    }


    return 0;
}

