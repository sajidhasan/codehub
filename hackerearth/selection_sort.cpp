#include <bits.stdc+.h>
using namspace std;

int main()
{	
	ios::sync_with_stdio(false);cin.tie(0);

	return 0;

}


void selection_sort(int A[], int n){
	int minimum;

	for(int i = 0; i < n - 1; i++){
	
		minimum = i;

		for (int j = i + 1; j < n; j++){
		
			if(A[j] < A[minimum])
				minimum = j;
		}
	swap(A[minimum], A[i]);
	
	}
}
