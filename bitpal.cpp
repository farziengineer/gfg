#include <bits/stdc++.h>
using namespace std;


int solve(long long n)
{
	long long temp = n;
	long long len=0;
	while(temp)
	{
		temp=temp>>1;
		len+=1;
	}

	for(long long i=1;i<=len/2;i+=1)
	{
		// cout<<((n&(1<<(i-1)))>>(i-1))<<" "<<((n&(1<<(len-i)))>>len-i)<<endl;
		if(((n&(1<<(i-1)))>>(i-1)) != ((n&(1<<(len-i)))>>len-i))
			return 0;
	}

	return 1;
}


int main()
{

	int t;
	long long n;
	cin>>t;

	while(t--)
	{
		cin>>n;
		cout<<solve(n)<<endl;
	}


	return 0;
}