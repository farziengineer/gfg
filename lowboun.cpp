#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n,a[1000],x;
	cin>>n;
	int *it;
	for(int i=1;i<=n;i+=1)
	{
		cin>>a[i];
	}

	while(1)
	{	
		cin>>x;
		it = lower_bound(a+1,a+1+n,x);
		cout<<it-(a+1)<<endl;
	}

	return 0;
}