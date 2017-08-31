#include <bits/stdc++.h>
using namespace std;
vector<vector<long long > >graph;
long long level[100005];
bool visited[100005];

void bfs(long long x)
{
    queue<long long>q;
    q.push(x);
    level[x] = 1;
    visited[x] = true;
    while(!q.empty())
        {
            long long current = q.front();
            q.pop();
            for(long long i=0;i<graph[current].size();i++)
            {
                if(visited[graph[current][i]]==false)
                {
                    level[graph[current][i]] = level[current]+1;
                    q.push(graph[current][i]);
                    visited[graph[current][i]] = true;
                }
            }

        }
}

int main()
{

    long long t;
    cin>>t;
    while(t--)
    {

        long long num,n,x,y;
         cin>>n>>x>>y;
            num=n;
        long long a[n+5];
        for(long long i=0;i<n;i++)
        {
             cin>>a[i];
             visited[i] = false;
        }
        
        graph.resize(num+1);
            num-=1;
            long long p = 0;
        while(p<n)
        {
            
            graph[p].push_back((a[p]%n + p-1)%n);
            graph[p].push_back(n-(a[p]%n + p-1)%n);
            p++;
        }
    bfs(x-1);
    cout<<level[y-1]<<endl;

}

 return 0;
}