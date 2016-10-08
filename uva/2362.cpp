#include <bits/stdc++.h>
#include <clocale>
#define REP(i, a, b) for(int i = int(a); i < int(b); i++)
using namespace std;

int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");
    int dset;
    cin >> dset;
    for(int i = 1; i <= dset; i++){
        double avg, sum = 0.0, n[12];
        REP(i, 0, 12){
            cin >> n[i];
            sum += n[i];
        }
    printf("%d $%'.2lf\n", dset, sum/12.0);
    }
    return 0;
}


