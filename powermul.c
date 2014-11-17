#include<stdio.h>
#include<math.h>
int main()
{
	long long int t,sum1,sum2,sum3,n,m,p,q,sum,j;
	sum1 = 1;
	sum2 = 1;
	sum3 = 1;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld %lld",&n,&m,&q);
		for(j=1;j<n+1;j++)
			sum1 = sum1*pow(j,j);
		while(q--)
		{
			sum2 = 1;
			sum3 = 1;
			scanf("%lld",&p);
			for(j=1;j<p+1;j++)
			{
				sum2 = sum2*pow(j,j);
			// for(j=1;j<n-p+1;j++)
				sum3 = sum3*pow(j,j);
			}
			sum = (sum1/(sum2*sum3))%m;
			printf("%lld\n",sum);
		}
	}
	return 0;
}