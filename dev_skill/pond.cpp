#include<bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;

int main()
{
    int cases, n;
    cin >> cases >> n;
    vector<string> fn(n);
    vector<int> dtime(n);
    int max = 0, min = 0, max_index = 0, min_index = 0;
    for(int k = 0; k < cases; k++){
        for(int i = 0; i < n; i++){
            cin >> fn[i] >> dtime[i];
        }

        max = min = dtime[0];

        for(int j = 1; j <= n; j++){
             if (max < dtime[j]){
                max = dtime[j];
                max_index = j;
            }
            if(min > dtime[j]){
                min = dtime[j];
                min_index = j;
            }
        }

        cout << fn[max_index] << fn[min_index] << endl;

    }

	return 0;
}
