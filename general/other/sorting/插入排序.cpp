#include <bits/stdc++.h>
using namespace std;
const int maxN = 1008611; 

int t, n; 
long long arr[maxN]; 

// O(n^2) : O(n)
void insert_sort(long long *arr, int left, int right)
{
	for (int i=left; i<right; ++i)
	{
		int j = i+1;
		while (j>left && arr[j]<arr[j-1]) {
			swap(arr[j], arr[j-1]);
			--j; 
		}
	} 
}

int main()
{
	#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout); 
	#endif
	
	scanf("%d", &t); 
	while (t--)
	{
		scanf("%d", &n); 
		for (int i=0; i<n; ++i)
		{
			scanf("%lld", &arr[i]); 
		}
		insert_sort(arr, 0, n-1);
		for (int i=0; i<n; ++i)
		{
			if (i) putchar(' ');
			printf("%lld", arr[i]); 
		} 
		putchar('\n'); 
	} 
}
