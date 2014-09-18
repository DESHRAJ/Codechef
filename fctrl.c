#include<stdio.h>
int main()
{
	int t,i,j,k=0,le;
	scanf("%d",&t);
	long int x[t];
	le = t;
	while(t--)
	{
		long int n;
		scanf("%ld",&n);
		int count = 0;
		for(i=5;i<=n;)
		{
			count  = count + (int)(n/i);
			i=i*5;
		}
		x[k]=count;
		k++;
	}
	for(k=0;k<le;k++)
		printf("%ld \n",x[k]);
	return 0;
}
