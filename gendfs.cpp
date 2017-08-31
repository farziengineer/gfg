#include <bits/stdc++.h>
using namespace std;

vector <int> adj[1000],temp;
bool viszted[1000];

void ini()
{
	for(int i=0;i<1000;i+=1)
	{
		viszted[i] = false;
	}
	temp.clear();
}

void printer()
{
	for(int i=0;i<temp.size();i+=1)
	{
		cout<<temp[i]<<" ";
	}
	cout<<endl;

}


void bfs(int s)
{
	queue<int >q;
	q.push(s);
	level[s] = 0;
	viszted[s] = true;

	while(q.empty()==false)
	{
		int  p =q.front();
		q.pop();

		for(i=0;i<adj[p].size();i+=1)
		{
			if(viszted[adj[p][i]]==false)
			{
				q.push(adj[p][i]);
				viszted[adj[p][i]];
			}
		}
	}


}

int main()
{
	int n,m,a[100],b[100],i,j;

	cin>>n>>m;

	for(i=1;i<=n;i+=1)
	{
		cin>>a[i];
	}

	for(i=1;i<=m;i+=1)
	{
		cin>>b[i];
	}

	for(i=1;i<=n;i+=1)
	{
		for(j=1;j<=m;j+=1)
		{
			if(a[i]>b[j])
			{
				adj[b[j]].push_back(a[i]);
			}
			else
			{
				adj[a[i]].push_back(b[j]);
			}
		}
	}

	for(i=1;i<=n;i+=1)
	{
		ini();
		bfs(a[i]);
	}

	return 0;
}