//Average Permutation
//Problem Code:AVGPERM
//code :- 
#pragma GCC optimize("O1")
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define for(i,l,n) for(ll i=l;i<n;i++)
ll max(ll a,ll b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
ll min(ll a,ll b)
{
	if(a>b)
	{
		return b;
	}
	else
	{
		return a;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		if(n!=3)
		{cout<<n-1<<" "<<n-2<<" ";
				for(i,1,n-3)
				{
					cout<<i<<" ";
				}
				cout<<n-3<<" "<<n<<"\n";}
		else
		{
			cout<<"3 2 1"<<"\n";
		}
		t--;
	}	
	return 0;
}
