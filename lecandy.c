#include<stdio.h>
int main()
{
	int t,n,a[100],i;
	long long int c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %lld", &n,&c);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			c = c-a[i];
		}
		if(c<0)
			printf("No\n ");
		else
			printf("Yes \n");
	}
	return 0;
}