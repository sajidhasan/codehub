/*
	1008 - Salary
	URI Online Judge
	Sajid Hasan
	md.hasansajid@gmail.com
	North South University
	Dhaka, Bangladesh
*/

#include <bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    int num, hour;
    float wage_ph, salary;
    sf("%d %d %f", &num, &hour, &wage_ph);
    salary = hour * wage_ph;
    pf("NUMBER = %d\nSALARY = U$ %.2f\n", num, salary);
    return 0;
}

