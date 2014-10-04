#include <iostream>
using namespace std;
int main()
{
	long int t,n,a[100],m,i,max;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}	
		for(i=0;i<n;i++)
		{
			m+=a[i];
		}
		if(m%n==0)
			cout<<"Yes"<<endl;
		else 
			cout<<"No"<<endl;
	}
	return 0;

}