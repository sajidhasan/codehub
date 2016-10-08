/*
author: Mohammad Sajid Hasan
domain: uva, ad-hoc
problem name: 11332 - Summing Digits
date: Oct 02, 2016
*/

#include <bits/stdc++.h>
#define pf printf
#define sf scanf

#define REP(i, a, b) for(int i = int(a); i <= int(b); i++)

using namespace std;

int main()
{
    long int n, sum;
    while(sf("%lu", &n) == 1 && n!=0){
        if (n < 10) pf("%lu\n", n);
        if(n > 9){
            while(n>9){
                sum = 0;
                while(n>0)
                {
                    sum += n % 10;
                    n /= 10;
                }
                n = sum;
            }
        }
        pf("%lu\n", n);

    }
    return 0;
}


