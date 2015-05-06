// #include<iostream>
#include<stdio.h>
#include<math>
// using namespace sstd;
int prime(long long int n)
{
	long long int i;
	if(n==2)
		return 1;
	else if(n%2!=0)
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

int palendrome(long long int n)
{
	long long int le=n,sum=0;
	int len=0,r,i;
	while(n>1)
	{
		n=n/10;
		len++;
	}
	n = le;
	for(i=len;i>=1;i++)
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
	long long int n,i;

	scanf("%lld",&n);
	for(i=n;;i++)
	{
		// cout<<"checking babes";
		if(prime(i) && palendrome(i))
		{
			printf("%lld\n",i );
			break;
		}
	}
	return 0;
}