#include <bits/stdc++.h>
using namespace std;

int n,arr[500],b[500];
vector <int > vec;

void solve()
{	
	int i;
	vec.clear();

	for(i=1;i<=n;i+=1)
	{	
		if(vec.empty()==true or arr[vec[vec.size()-1]]>=arr[i])
			vec.push_back(i);
		else 
		{
			while(vec.size()>0 and  arr[vec[vec.size()-1]]<arr[i])
			{
				b[vec[vec.size()-1]]=arr[i];
				vec.pop_back();
			}
			vec.push_back(i);			
		}

	}

	while(vec.size()>0)
	{
		b[vec[vec.size()-1]]=-1;
		vec.pop_back();
	}

	for(i=1;i<=n;i+=1)
	{
		cout<<b[i]<<" ";
	}

	cout<<endl;
}


int main()
{


	int t,i,j;

	cin>>t;

	while(t--)
	{
		cin>>n;

		for(i=1;i<=n;i+=1)
		{
			cin>>arr[i];
		}

		solve();
	}

	return 0;
}