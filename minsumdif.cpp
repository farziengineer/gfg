#include <bits/stdc++.h>
using namespace std;

int a[5000],sum;
int state[92][3002];
int n;

void ini()
{
	for(int i=0;i<90;i+=1)
	{
		for(int j=0;j<3000;j+=1)
			state[i][j]=-1;
	}
	sum=0;
}

int solve(int index, int sum1)
{
	if(index==n+1)
	{
		int sm = sum1;
		int conj = sum-sm;
		int r1 = abs(sm-conj);
		return r1;
	}

	if(state[index][sum1]!=-1)
		return state[index][sum1];

	return state[index][sum1] = min(solve(index+1,sum1),solve(index+1,sum1+a[index])); 
}


int main()
{


	int t;

	cin>>t;

	while(t--)
	{

		ini();
		cin>>n;

		for(int i=1;i<=n;i+=1)
			{cin>>a[i];sum+=a[i];}
		cout<<solve(1,0)<<endl;
	}


	return 0;
}