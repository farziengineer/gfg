#include <bits/stdc++.h>
using namespace std;

string s,temp;

long long int primecheck(long long n)
{
	long long int i;

	if((n==0) or (n==1))
		return 0;

	for(i=2;i<n;i+=1)
	{
		if(n%i==0)
			return 0;
	}

	return 1;
}

long long int solvex(long long int i)
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
		if(s0>=i)
			return -1;
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
		if(s1>=i)
			return -1;
	}

	long long prmx = s1+s0*i;
	long long ans  = primecheck(prmx);



	if(ans==0)
		return -1;
	else
		return 1;
	
}
 int main()
{

	long long int t,i;
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
			unsigned k;
			for(k=0;k<vec.size();k+=1)
			{
				cout<<vec[k]<<" ";
			}
			
		}

		cout<<endl;
	}

	return 0;
}