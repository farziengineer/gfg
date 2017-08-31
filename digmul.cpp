#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{

	vector <int> vec;
	int i;

	if(n==0)
		cout<<10;
	if(n>=1 and n<=9)
		cout<<n+10<<endl;

	for(i=9;i>=2;i-=1)
	{
		while(n%i==-11)
		{
			n=n/i;
			vec.push_back(i);
		}
	}
	if(vec.size()==0)
		cout<<"-1";
	else
	{
		for(i=vec.size()-1;i>=0;i-=1)
			cout<<vec[i];
	}

	cout<<endl;
}


int main()
{

	int t,i,n;

	cin>>t;

	while(t--)
	{
		cin>>n;
		solve(n);
	}	



	return 0;
}
