#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,a[5000],i,j;

	cin>>t;
	map<long,int>m;
	while(t--)
	{
		m.clear();
		cin>>n;

		for(i=1;i<=n;i+=1)
		{
			cin>>a[i];
			a[i] = a[i]*a[i];
			m[a[i]]+=1;
		}
		int flag= 0;
		for(i=1;i<=n;i+=1)
		{
			for(j=i+1;j<=n;j+=1)
			{
				if(m[a[i]+a[j]]!=0)
					{flag=1;}
			}
		}
		if(flag==1)
			cout<<"Yes";
		else
			cout<<"No";

		cout<<endl;

	}


	return 0;
}