#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
	 long long  int n,t,sel,m,i;
	 cin>>t;
	 // scanf("%ld",&t);
	while(t--)
	{
		// k=0;
		// scanf("%ld %ld",&n,&m);
		cin>>n>>m;
	 	long long int a[n],max[n];

			for(i=0;i<n;i++)
			{ 
				max[i]=0;
			}
		while(m--)
		{
			// scanf("%ld",&sel);
			cin>>sel;
			for(i=0;i<n;i++)
			{ 
				a[i]=abs(sel-i);
					if(max[i]<=a[i])
					{
						max[i] = a[i];
					}
			}
		}
		for(i=0;i<n;i++)
		{
			// printf("%ld ",max[i]);
			cout<<max[i]<<" ";
		}
		// printf("\n");
		cout<<endl;

	}
	return 0;

}
