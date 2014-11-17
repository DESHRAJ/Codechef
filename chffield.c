#include<stdio.h>
#include<math.h>
int prime(long int l)
{
	long int i;
	if (l==1)
		return 0;
	if(l==2)
		return 1;
	else
	{

	for(i=2;i<=sqrt(l);i++)
	{
		if(l%i==0)
			return 0;
	}
	}
	return 1;
}
int main()
{
	int t;
	long int l,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld",&l);
		scanf("%ld",&b);
		if(l==3)
			l = 1;
		else if(prime(l))
			 l-=1;
		if (b==3)
			b=1;
		else if (prime(b))
			b-=1;
	printf("%ld\n",l*b);
	}
	return 0;
}