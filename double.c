#include<stdio.h>
int main()
{
	int t;
	long int n;
	scanf("%d",&t);
	// long int a[t];
	while(t--)
	{
		scanf("%ld",&n);
		if(n>0)
		{
			if(n%2==0)
				printf("%ld\n",n);
			else 
				printf("%ld\n",n-1);
		}
	}
	return 0;
}