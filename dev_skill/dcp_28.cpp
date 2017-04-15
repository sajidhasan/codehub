#include <bits/stdc++.h>
#define pf printf
#define sf scanf
#define REP(i, a, b) for(int i = int(a); i <= int(b); i++)

using namespace std;

int main()
{
    int tc;
    scanf("%d", &tc);
    REP(i, 1, tc){
        double rad, side, hyp;
        scanf("%.2lf %.2lf", &rad, &side);
        double dia = rad * 2;
        hyp = sqrt(pow(side, 2)*2);

        round(hyp) == round(dia) ? pf("Yes\n") : pf("No\n");
    }
    return 0;

}
