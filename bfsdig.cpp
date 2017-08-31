#include <bits/stdc++.h>
using namespace std;

long n;
map <string,int> vizted;
vector <int> adj[5000];


int modx(string s)
{
	int i,new_num=0;
	long pow10=1;
	for(i=s.length()-1;i>=0;i-=1)
	{
		new_num =  (new_num + ((s[i]-'0')*pow10)%n)%n;
		pow10 = (pow10*10)%n;
	}	
	return new_num;
}


string solvebfs(string src)
{
	queue<string>q;
	vizted[src]=1;
	q.push(src);

	while(q.empty()==false)
	{
		string p = q.front();
		q.pop();
		if(modx(p)==0)
			return p;

		q.push(p+"1");
		q.push(p+"0");
	}

}


int main()
{

	cin>>n;
	cout<<solvebfs("1");	


	return 0;
}