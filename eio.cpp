#include<iostream>
using namespace std;
int main()
{
	long int n,k,i;
	int count=0;
	cin>>n;
	cin>>k;
	i=0;

	if(k>0)
	{

		while(i<n)
		{
			long int new1;
			cin>>new1;
			if(new1%k==0)
				count++;
		}
	cout<<count;
	}
	return 0;
}