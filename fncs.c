#include<stdio.h>
long long int sum1(long long int a[],long long int m, long long int n)
{
	long long int sum=0, i;
	for(i=m;i<=n;i++)
	{
		sum += a[i]; 
	}
	return sum;
}
int main()
{
	long long int n,i,j;
	scanf("%lld",&n);
	long long int a[n],ri[n],li[n],fi[n],q,m,n1,nq;
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		scanf("%lld %lld",&li[i],&ri[i]);
		fi[i] = sum1(a, li[i],ri[i]);
	}
	scanf("%lld",&nq);
	for(i=1;i<=nq;i++)
	{
		scanf("%lld %lld %lld",&q,&m,&n1);
		if(q==2)
		{
			printf("%lld\n",sum1(fi,m,n1));
		}
		else
		{
			a[m] = n1;
			for(j=1;j<=n;j++)
			{
				// scanf("%ld",&a[i]);
				fi[j] = sum1(a,li[j],ri[j]);
				// printf("%lld\n",fi[j] );
			}
		}
	}

	return 0;

}