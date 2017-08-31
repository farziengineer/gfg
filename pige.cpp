#include <bits/stdc++.h>
using namespace std;

long temp[300055];

void ini()
{
	for(int i=0;i<100055;i+=1)
		temp[i]=-1;
}

long solve(long n)
{
	long dig=4;
	long ans=10000000;

	for(int i=1;i<=n+1;i+=1)
	{
		if(dig%n==0)
			{ans = 2*i;break;}
		dig=(dig*10+4)%n;
	}

	// cout<<ans<<endl;
	dig=4;
	for(int i=1;i<=n+1;i+=1)
	{
		if(temp[dig]!=-1)
			{
				ans = min(ans,2*(i-temp[dig])+temp[dig]);
				break;
			}
			else
			{
				temp[dig] = i;
			}
		dig = (dig*10+4)%n; 
	}
	return ans;
}


int main()
{

	int t;

	cin>>t;

	while(t--)
	{
		ini();
		long n;
		cin>>n;
		cout<<solve(n)<<endl;
	}


	return  0;
}