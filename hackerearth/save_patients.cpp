#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);cin.tie(0);
	int n;
	cin >> n;
	vector<int> v_count(n), p_count(n);
	for(int i = 0; i < n; i++) cin >> v_count[i];
	for(int j = 0; j < n; j++) cin >> p_count[j];

	sort(v_count.begin(), v_count.end());
	sort(p_count.begin(), p_count.end());

	for(int k = 0; k < n; k++)
	{
		if(v_count[k] < p_count[k])
		{
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;


	return 0;
}
