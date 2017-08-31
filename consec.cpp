#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

long long fib[500];


void solve()
{

	fib[1] = 2;
	fib[2] = 3;
	for(int i=3;i<=110;i+=1)
	{
		fib[i] = (fib[i-1]%mod+fib[i-2]%mod)%mod;
	}
}

int main()
{

	int t;
	solve();
	cin>>t;


	while(t--)
	{
		long long n;
		cin>>n;
		cout<<fib[n]<<endl;



	return 0;
}