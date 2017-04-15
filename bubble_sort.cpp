#include <iostream>
using namespace std;

void bubble_sort(int x[], int n)
{
    int j, pass, hold;
    bool switched = true;

    for(pass = 0; pass < n-1 && switched == true; pass++)
    {
        switched = false;
        for(j = 0; j < n-pass-1; j++)
        {
            if(x[j] > x[j+1])
            {
                switched = true;
                hold = x[j];
                x[j] = x[j+1];
                x[j+1] = hold;
            }
        }
    }
}

int main()
{
    int a[] = {23, 45, 67, 12, 34, 13};
    int n = 6;
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
    cout << "\n";

    bubble_sort(a, n);

        for(int i=0; i<n; i++)
        cout << a[i] << " ";

    return 0;
}
