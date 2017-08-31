#include <bits/stdc++.h>
using namespace std;


int main()
{

	int t,n,i,j,a[1000];
	vector< pair< int ,int >  > vec;
	pair< int ,int >mp;
	map<int ,int >fre;

	cin>>t;

	while(t--)
	{
		cin>>n;
		fre.clear();
		vec.clear();

		for(i=1;i<=n;i+=1)
		{
			cin>>a[i];
			fre[a[i]]++;
		}


		for(i=1;i<=n;i+=1)
		{
			mp =make_pair(-fre[a[i]],a[i]);
			vec.push_back(mp);
		}

		sort(vec.begin(),vec.end());

		for(i=0;i<n;i+=1)
		{
			cout<<vec[i].second<<" ";
		}

		cout<<endl;
	}


	return 0;
}