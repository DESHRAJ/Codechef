#include<stdio.h>
int main()
{
	long int n[100],i=0,k=0;
	long long int sum;
	for(i=0;;i++)
	{
	scanf("%ld",&n[i]);
	k=i;
	if(n[i]==0)
		break;
	}
	for(i=0;i<k;i++)
	{
	sum = n[i]*(n[i]+1)*((2*n[i])+1)/6;
	printf("%lld\n",sum);
	}
	return 0;
}