#include <bits/stdc++.h>
using namespace std;

int main()
{

	long long n,q,i,x,lef,rig,pseudo_start[100055],gap[100055],start[100555],a[10055],prev=1;
	long long *it;

	cin>>n>>q;

	for(i=1;i<=n;i+=1)
	{
		cin>>lef>>rig;
		gap[i] = rig-lef+1;
		start[i] = lef;
		pseudo_start[i] = prev;
		prev = prev+gap[i];
	}


	for(i=1;i<=q;i+=1)
	{
		cin>>x;
		it  = lower_bound(pseudo_start+1,pseudo_start+1+n,x);
		int indx = it-(pseudo_start);
		if(x==pseudo_start[indx])
		{}
		else
			{indx-=1;}
		cout<<start[indx]+ x-pseudo_start[indx]<<endl;
	} 

	return 0;
}