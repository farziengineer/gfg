#include <bits/stdc++.h>
using namespace std;
string s;
vector<char> vec;

bool solve()
{
	for(int i=0;s[i];i+=1)
	{
		if(vec.size()==0)
		{
			vec.push_back(s[i]);
		}
		else if(s[i]==')')
		{
			if(vec[vec.size()-1]=='(')
			{
				return true;
			}
			else
			{
				while(1)
				{
					if(vec[vec.size()-1]=='(')
					{
						vec.pop_back();
						break;
					}
					
					else
					{
						vec.pop_back();
					}
				}
			}
		}

		else
		{
			vec.push_back(s[i]);
		}
	}
return false;

}

int main()
{

	int i,ans;


	cin>>s;
	cout<<solve();

	return 0;
}