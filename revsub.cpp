// first element greater than x, binary search in an array
#include <bits/stdc++.h>
using namespace std;

long n, arr[1000];

long bin_search(int key)
{
	// for(int i =1;i<=n;i+=1)
	// 	cout<<arr[i]<<" ";

	long left, right, mid, ans=-1;

	left = 1;
	right = n;

	while(left<right)
	{
		mid = (left+right)/2;

		if(arr[mid]<=key)
		{
			left = mid+1;
		}
		else
		{
			right = mid;
			ans = mid;
		}
		cout<<left<<" "<<mid<<" "<<right<<endl;
	}
	return left;	
}

int main()
{
	long i, k;

	cin>>n;

	for(i=1; i<=n; i+=1)
	{
		cin>>arr[i];
	}
	cin>>k;

	cout<<bin_search(k);


	return 0;
}