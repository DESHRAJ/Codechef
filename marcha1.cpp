#include<iostream>
using namespace std;
int t,n,m,a[20];
void check(int a[],int m)
{
	int val=a[0];
	if(m!=0)
	{
		for(i=1;i<n;i++)
		{
			if(val<=a[i] && a[i]<=m)
			{
				val = a[i];
			}
		}
	}
}
int main()
{
	cin>>t;
	while(t--)
	{
		cin>n>>m;
		for(i=0;i<n;i++)
			cin>>a[i];
		check(a,m);
	}
	return 0;
}