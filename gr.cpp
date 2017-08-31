#include <bits/stdc++.h>
using namespace std;

int main()
{

	int t,i,n,a[5000],s[5000],g[5000];

	cin>>t;

	while(t--)
	{
		cin>>n;
		s[0] = 5000;
		g[n+1] = -1;
		for(i=1;i<=n;i+=1)
		{
			cin>>a[i];
			s[i] = min(s[i-1],a[i]);
		}
		for(i=n;i>=1;i-=1)
		{
			g[i] = max(g[i+1],a[i]);
		}

		int cnt = 0;
		for(i=1;i<=n;i+=1)
		{
			if(s[i]!=a[i] and g[i]!=a[i])
				cnt+=1;
		}

		cout<<cnt<<endl;
	}


	return 0;
}