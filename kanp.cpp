#include <bits/stdc++.h>
using namespace std;

short sol[104555][104];
int a[500];

void ini(int sum)
{
	for(int i=0;i<sum+2;i+=1)
	{
		for(int j=0;j<101;j+=1)
		{
			sol[i][j] = -1;
		}
	}
}


int issum(int sum,int n)
{
	if(sum==0)
		return 1;
	if(sum<0)
		return 0;
	if(n==0)
		return 0;
	if(sol[sum][n]!=-1)
		return sol[sum][n];

	 // if (a[n] > sum)
  //    return sol[sum][n] = issum(sum,n-1);


	return sol[sum][n]= issum(sum-a[n],n-1) | issum(sum,n-1);

}

int main()
{

 	int t,i,n;

 	cin>>t;

 	while(t--)
 	{	
 		// ini();
 		cin>>n;
 		long sum = 0;
 		for(i=1;i<=n;i+=1)
 		{
 			cin>>a[i];
 			sum+=a[i];
 		}

 		if(sum%2==0)
 		{
 			ini(sum/2);
 			if(issum(sum/2,n)>0)
 				cout<<"YES";
 			else
 				cout<<"NO";
 			// cout<<issum(sum/2,n);
 		}
 		else
 			cout<<"NO";

 		cout<<endl;
 	}


	return 0;
}