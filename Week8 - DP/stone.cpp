#include<bits/stdc++.h>
using namespace std;

long long int a[100010],b[100010],c[100010];
 
int main()
{
	int n,q,t,l,r,i;
	cin>>n;
	for( i=0; i<n; i++)
	{
		cin>>a[i];
		b[i+1] = a[i] + b[i];
	}
	sort(a,a+n);
	for( i=0; i<n; i++)
	{
		c[i+1] = a[i] + c[i];
	}
	cin>>q;
	while(q--)
	{
		cin>>t>>l>>r;
		if(t==1)
		{
			cout<<b[r]-b[l-1]<<endl;
		}
		else
		{
			cout<<c[r]-c[l-1]<<endl;
		}
	}
	return 0;
}
