#include<iostream>
using namespace std;
int n,temp,count,max;
int min(int a[])
{
	count=0;
	int min=10001,pos;
	int i;
	for(i=0;i<n;i++)
		{
			// cin>>a[i];
			if(min>=a[i])
			{
				min=a[i];
				pos = i;
			}
		}
	mini = a[pos];
	// pos = min(a);
	// mini = a[pos];
	for(i=0;i<n;i++)
		if(mini==a[i])
			count++;
	temp = count;
	if(max!=mini)
		min(a)
	// return pos;
}
int main()
{
	int t,a[100];
	cin>>t;
	while(t--)
	{
		max=0;
		min=10001;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(min>=a[i])
				min = a[i];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<)
		}
	}
	return 0;
}