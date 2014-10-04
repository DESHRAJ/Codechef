#include<iostream>
using namespace std;
int main()
{
	int t;
	long long int a[1000],max;
	int n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
			cin>>a[i];
		max = a[0];
		for(i=1;i<n;i++)
		{
			if(max<a[i])
				max = a[i];
		}
		cout<<max<<endl;
	}
	return 0;
}