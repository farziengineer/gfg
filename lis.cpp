#include <bits/stdc++.h>
using namespace std;

int a[2000],L[2000];

int lis_solve(int n)
{
	for(int i=1;i<=n;i+=1)
	{
		L[i] = 0;
	}

	for(int i=1;i<=n;i+=1)
	{
		int ans= 0;
		for(int j=1;j<i;j+=1)
		{
			if(a[j]<a[i])
				ans = max(L[j],ans);
		}
	L[i] = ans+1;
	}

	int res= 0;
	for(int i=1;i<=n;i+=1)
	{
		res = max(res,L[i]);
	}

	return res;
}



int main()
{

	int t,n,i;

	cin>>t;

	while(t--)
	{
		cin>>n;

		for(i=1;i<=n;i+=1)
		{
			cin>>a[i];
		}

		cout<<lis_solve(n)<<endl;
	}


	return 0;
}