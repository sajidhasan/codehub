#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();

	int m, n;
	cin >> n >> m;
	n = (n*(n+1))/2;
	vector<int>v(m);
	for(int i = 0; i<m; i++){
		cin >> v[i];
		n -= v[i];
	}
	cout << n << endl;

	return 0;
}
