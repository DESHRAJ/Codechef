#include<iostream>
#include <math.h>
using namespace std;

int main()
{
	int t,flag;
	long int m,n,i,j;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		if(n-m<=100000 && m<=1000000000 && n<=1000000000)
		{
			i=m;
			while(i<n)
			{
				j=2;
				while(j<=(i/j))
				{
					if(!i%j)
						break;

					j=j+1;
				}
				if(j>i/j)
					cout<<i<<endl;

				i=i+1;
			}
		}
	}
	return 0;
}