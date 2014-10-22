#include<stdio.h>
int main()
{
	int t,i,a[1000],n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("%d\n",n);
	}
	return 0;
}