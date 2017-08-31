#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,a[500],i;

	cin>>n>>m;

	for(i=1;i<=n;i+=1)
	{
		cin>>a[i];
	}

	sort(a+1,a+1+n);

	int ans = 5000;
	for(i=1;i<=n;i+=1)
	{
		if(i+m-1<=n)
			ans = min(ans,a[i+m-1]-a[i]);
	}

	cout<<ans;



	return 0;
}