/*
	1007 - Difference
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
    int a, b, c, d, result;
    sf("%d %d %d %d", &a, &b, &c, &d);
    result = (a * b) - (c * d);
    pf("DIFERENCA = %d\n", result);
    return 0;
}
