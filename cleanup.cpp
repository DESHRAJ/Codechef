#include<iostream>
using namespace std;
int main()
{
	int t,m,n,size1,size2,i,j,count,x,k;

	long int a[1000],b[1000],c[1000];
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(i=1;i<=n;i++)
			a[i]=1;
		for(i=1;i<=m;i++)
		{
			cin>>x;
			a[x]=0;
		}
		count=2;
		j=0;
		k=0;
		size1=0;
		size2=0;
		for(i=1;i<=n;i++)
		{
			if(a[i]==1)
			{
				if(count%2==0)
				{
					b[j]=i;
					j++;
					count++;
					size1++;
				}
				else
				{
					c[k]=i;
					k++;
					count++;
					size2++;
				}
			}
		}
		for(i=0;i<size1;i++)
			cout<<b[i]<<" ";
		cout<<endl;
		for(i=0;i<size2;i++)
			cout<<c[i]<<" ";
		cout<<endl;
	}
	return 0;
}