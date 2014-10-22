#include<stdio.h>
int main()
{
	long int t,n;
	long long int s;
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld",&n);
		s = (long long int)((n*n)+(3*n))/2;
		printf("%lld\n",s);
	}
	return 0;
}