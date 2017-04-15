/*
	1010 - Simple Calculate
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

struct product{
    int code, unit;
    float price;
};

int main()
{
    product product1, product2;
    sf("%d %d %f", &product1.code, &product1.unit, &product1.price);
    sf("%d %d %f", &product2.code, &product2.unit, &product2.price);

    float total_price = (product1.unit * product1.price) + (product2.unit * product2.price);

    pf("VALOR A PAGAR: R$ %.2f\n", total_price);

    return 0;
}

