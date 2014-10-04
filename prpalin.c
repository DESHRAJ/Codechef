#include<stdio.h>
#include<math.h>
int prime(long int n)
{
	long int i;
	if(n==2)
		return 1;
	else
	{
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				return 0;
			}
		}
	}
	return 1;
}

int palendrome(long int n)
{
	// printf("%lld\n",n);
	long int le=n,sum=0;
	int len=0,r,i;
	while(n>=1)
	{
		n=n/10;
		len++;
	}
	n = le;
	for(i=len-1;i>=0;i--)
	{
		r =n%10;
		sum = sum+ pow(10,i)*r;
		n=n/10; 
	}
	if(le == sum)
		return 1;
	else
		return 0;
}
int main()
{
	long int n,i;
	scanf("%ld",&n);
	for(i=n;;i++)
	{
		if(prime(i) && palendrome(i))
		{
			printf("%ld \n",i );
			break;
		}
	}
	return 0;
}