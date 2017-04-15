/*
	1011 - Sphere
	URI Online Judge
	Sajid Hasan
	md.hasansajid@gmail.com
	North South University
	Dhaka, Bangladesh
*/

#include <bits/stdc++.h>

#define pf printf
#define sf scanf

#define PI 3.14159

using namespace std;

int main()
{
    double rad, volume;
    sf("%lf", &rad);
    volume = (4.0/3) * PI * rad * rad * rad;

    pf("VOLUME = %.3lf\n", volume);

    return 0;
}

