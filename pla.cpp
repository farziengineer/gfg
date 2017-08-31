#include <bits/stdc++.h>
using namespace std;

map<char,int> xmap;

void pre_()
{
	for(int i=0;i<=9;i+=1)
	{
		xmap[char('0'+i)] = i;
	}

	for(int i=10;i<=36;i+=1)
	{
		xmap[char('A'+i-10)] = i;
	}
}


string str;

int final_sol(long base)
{
	if((xmap[str[0]]>=base) or (xmap[str[1]]>=base))
	{
		return -1;
	}

	long ans_calc = xmap[str[1]] + xmap[str[0]]*base;
	if (ans_calc==0 or ans_calc==1)
		return -1;

	for(int i=2;i*i<=ans_calc;i+=1)
	{
		if(ans_calc%i==0)
			return -1;
	}

	return 1;
}


int main()
{

	int t;

	cin>>t;

	while(t--)
	{
		pre_();
		cin>>str;

		int flag=0;
		for(int i=2;i<=36;i+=1)
		{
			if(final_sol(i)==1)
				{cout<<i<<" ";flag=1;}
		}
		if(flag==0)
		{
			cout<<"NONE";
		}
		cout<<endl;

	}


	return 0;
}