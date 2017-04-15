/*
	1009 - Salary with Bonus
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
    char name[100];
    float salary, sale, total_salary;
    sf("%s %f %f", name, &salary, &sale);
    total_salary = salary + (sale *15/100);
    pf("TOTAL = R$ %.2f\n", total_salary);

    return 0;
}

