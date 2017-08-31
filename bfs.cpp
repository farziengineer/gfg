#include <bits/stdc++.h>
using namespace std;

int a[500],b[500],n,m,big;
vector<int>temp;

void printer()
{
	int i;
	for(i=0;i<temp.size();i+=1)
	{
		cout<<temp[i]<<" ";
	}
	cout<<endl;
}

void solve(int ptr,int flag)
{
	int i;
	if(ptr==big)
	{	
		if(flag==0){temp.push_back(b[ptr]);printer();}
		return;
	}
	 
	if(flag==1)
	{
		temp.push_back(a[ptr]);
		flag=0;
		int res=0;
		for(i=1;i<=m;i+=1)
		{
			if(b[i]>a[ptr])
			{
				solve(i,flag);
				res = 1;
			}
		}
		if(res==0){temp.clear();return;}

	}

	else
	{
		temp.push_back(b[ptr]);
		flag=1;
		int res=0;
		printer();
		for(i=1;i<=n;i+=1)
		{
			if(a[i]>b[ptr])
			{
				res =1;
				solve(i,flag);
			}
		}
		if(res==0){temp.clear();return;}
	}
}



int main()
{
	int i;

	cin>>n>>m;

	for(i=1;i<=n;i+=1)
	{
		cin>>a[i];
	}

	for(i=1;i<=m;i+=1)
	{
		cin>>b[i];
	}

	if(a[n]>b[m])big=n;
	else big=m;

	for(i=1;i<=n;i+=1)
	{
		temp.clear();
		solve(i,1);
	}
	return 0;
}