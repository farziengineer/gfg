#include <bits/stdc++.h>
using namespace std;


int main()
{

	int t,i;
	int m,n,a1[500],a2[500];
	map<int,int>mymap;
	vector< pair< int,int > > vec;


	cin>>t;
	while(t--)
	{

		mymap.clear();
		vec.clear();

		cin>>m>>n;

		for(i=1;i<=m;i+=1)
		{
			cin>>a1[i];
		}
		sort(a1+1,a1+1+m);

		for(i=1;i<=m;i+=1)
		{
			mymap[a1[i]]=2000+i;
		}

		for(i=1;i<=n;i+=1)
		{
			cin>>a2[i];
			mymap[a2[i]]=i;
		}

		int inf = 2000;
		for(i=1;i<=m;i+=1)
		{
			vec.push_back(make_pair(mymap[a1[i]],a1[i]));
		}

		sort(vec.begin(),vec.end());
		for(i=0;i<vec.size();i+=1)
		{
			cout<<vec[i].second<<" ";
		}

		cout<<endl;

	}



	return 0;
}