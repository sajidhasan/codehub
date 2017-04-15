#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a, b;
	for(int i=0; i<n; i++)
		cin >> a[i];
	for(int j=0; j<n; j++)
		cin >> b[j];
	for(int k=0; k<n; k++)
		cout << a[k]+b[k] << " \r";

	return 0;
}
