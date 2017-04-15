#include <bits/stdc++.h>
#define pf printf
#define sf scanf

using namespace std;

int main()
{
    int cases;
    sf("%d", &cases);

    for(int i = 0; i < cases; i++)
    {
        int ban[4], pak[4];
        sf("%d %d %d %d", &ban[0], &ban[1], &pak[0], &pak[1]);
        sf("%d %d %d %d", &ban[2], &ban[3], &pak[2], &pak[3]);
        int ban_total1 = ban[0] + ban[1];
        int ban_total2 = ban[2] + ban[3];
        int pak_total1 = pak[0] + pak[1];
        int pak_total2 = pak[2] + pak[3];

        (ban_total1 > pak_total1) && (ban_total2 > pak_total2) ? pf("Banglawash\n") : pf("Miss\n");
    }

    return 0;
}
