/*
	1006 - Average 2
	URI Online Judge
	Sajid Hasan
	md.hasansajid@gmail.com
	North South University
	Dhaka, Bangladesh
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a, b, c, result;
    scanf("%f %f %f", &a, &b, &c);
    result = (a * 2 + b * 3 + c * 5)/ (2 + 3 + 5);
    printf("MEDIA = %.1f\n", result);
    return 0;
}

