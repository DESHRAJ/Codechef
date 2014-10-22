// #include<iostream>
#include<stdio.h>
#include<math.h>
// using namespace std;
int main()
{
	long long int n,t,sel,m,i,k;
	 // cin>>t;
	 scanf("%lld",&t);
	while(t--)
	{
		k=0;
		scanf("%lld %lld",&n,&m);
		long long int a[n],max[n];
		// cin>>n>>m;
			for(i=0;i<n;i++)
			{ 
				max[i]=0;
			}
		while(m--)
		{
			scanf("%lld",&sel);
			// cin>>sel;
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
			printf("%lld ",max[i]);
			// cout<<a[0][i]<<" ";
		}
		printf("\n");
		// cout<<endl;

	}
	return 0;

}
