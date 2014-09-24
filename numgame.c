#include<stdio.h>
int count = 0;
 long int max( long int n)
{
	 long int i;
	for(i=n/2;i>=1;i--)
	{
		if(n%i==0)
		{
			return i;
		}
	}
}
void calc( long int n)
{
	if(n%2==0)
	{
		n=n-(n/2);
		count++;
		calc(n);
	}
	else if(n!=1)
	{
		n = n - max(n);
		count++;
		calc(n);
	}
	else if(n==1)
	{
		if(count%2==0)
			printf("BOB");
		else 
			printf("ALICE");
	}
}

int main()
{
	int t;
	 long int n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld",&n);
		count = 0;
		calc(n);
	}
	return 0;
}