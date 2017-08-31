#include <bits/stdc++.h>
using namespace std;

int a[145];

int solve(int n)
{
	int i,j;

	for(i=1;i<=n;i+=1)
	{
		for(j=i+1;j<=n and (i+j<=n);j+=1)
		{
			waysabcd[a[i]+a[j]]=pair(a[i],a[j]);
		}
	}

	for(i=1;i<=n;i+=1)
	{
		for(j=i+1;j<=n;j+=1)
		{
			
		}
	}


}


int main()
{

	int t,i,n;

	cin>>t;

	while(t--)
	{
		cin>>n;

		for(i=1;i<=n;i+=1)
		{
			cin>>a[i];
		}

		cout<<solve(n)<<endl;

	}


	return 0;
}