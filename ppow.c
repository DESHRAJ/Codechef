#include<stdio.h>
#include<math.h>
int main()
{
	long int t;
	int a,b;
	unsigned long long int sum,n;
	scanf("%ld",&t);
	while(t--)
	{
		sum=0;
		scanf("%d %d",&a,&b);
		n = pow(a,b);
		while(n)
		{
			sum = sum+n%10;
			n/=10;
		}
		printf("%llu\n",sum );

	}
	return 0;
}