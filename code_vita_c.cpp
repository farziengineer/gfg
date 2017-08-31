#include <bits/stdc++.h>
using namespace std;

string s,temp;

int isprime(long long n)
{
	int i;
	if(n==1 or n==0)
		return 0;		
	for(i=2;i<n;i+=1)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}

int solvex(int i)
{
	s = temp;

	long long s0,s1;

	if(s[0]>='A' and s[0]<='Z')
	{
		s0 = 10+s[0]-'A';
		if(s0>=i)
			return -1;
	}
	else
	{
		s0 = s[0]-'0';
	}

	if(s[1]>='A' and s[1]<='Z')
	{

		s1 = 10+s[1]-'A';
		if(s1>=i)
			return -1;
	}
	else
	{
		s1 = s[1] -'0';
	}

	long long prmx = s1+s0*i;
	long long ans  = isprime(prmx);

	cout<<prmx<<" "<<i<<endl;

	if(ans==0)
		return -1;
	else
		return 1;
	
}

int main()
{

	int t,i;
	cin>>t;
	vector<long long >vec;
	while(t--)
	{
		vec.clear();
		cin>>temp;
		for(i=2;i<=36;i+=1)
		{
			if(solvex(i)!=-1)
				vec.push_back(i);
		}

		if(vec.size()==0)
			cout<<"NONE";
		else
		{
			for(i=0;i<vec.size();i+=1)
			{
				cout<<vec[i]<<" ";
			}
			
		}


		cout<<endl;
	}

	return 0;
}