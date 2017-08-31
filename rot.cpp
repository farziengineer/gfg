#include <bits/stdc++.h>
using namespace std;

map <string,int> m;

int soln(string s)
{
	int i;
	string temp = s+s;
	int len = s.length();

	for(i=1;i<=len;i+=1)
	{
		if(temp.substr(i,len)==s)
			return i;
	}
	return len;
}

int main()
{

	string str;
	cin>>str;
	cout<<soln(str);
	return 0;
}
