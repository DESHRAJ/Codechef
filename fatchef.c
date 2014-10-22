#include<stdio.h>
int main()
{
	int t;
	char a[100000],x;
	long long int b[100000],sum;
	long int n,m,i;
	scanf("%d",&t);
	while(t--)
	{
		sum=1;
		scanf("%ld",&n);
		scanf("%ld",&m);
		// printf("%ld\n",m);
		for(i=0;i<m;i++)
		{
			// printf("%ld\n ",i);
			scanf("%s",&a[i]);
			scanf("%lld",&b[i]);
			// printf("loop end \n");		
		}
		if(m==1)
		{
			printf("1");
			break;
		}
		else
		{
			for(i=0;i<m-1;i++)
			{
				if(a[i]!=a[i+1])
				{
					sum=(sum*((b[i+1]-b[i])%1000000009))%1000000009;
				}
			}
		}
		printf("%lld \n",sum);
	}
	return 0;
}