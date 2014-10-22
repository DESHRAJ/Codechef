#include<iostream>
using namespace std;
int main()
{
	int t,n,a[50],min=0,i,j,flag,hcf;
	cin>>t;
	while(t--)
	{
		min=1001;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(min>=a[i])
				min = a[i];
		}
		flag=0;
		for(i=min;i>=1;i--)
		{
			for (j=0;j<n;j++)
			{
				if(a[j]%i!=0)
				{
					flag=1;
					break;
				}
				else 
					flag=0;
			}
			if(flag==0)
			{
				hcf=i;
				break;
			}
		}
		for(i=0;i<n;i++)
			cout<<int(a[i]/hcf)<<" ";
		cout<<endl;
	}
	return 0;
}