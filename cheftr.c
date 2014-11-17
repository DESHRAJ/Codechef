#include<stdio.h>
int main()
{
	int t;
	long long int n,k,sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&k);
		printf("%lld\n",(n*(n-1)*(n-2)-k*(k-1)*(k-2))/6 );

	}
	return 0;
}