#include<stdio.h>
int main()
{
	int t,c1,c2,a[100],n,i,j;
	scanf("%d",&t);
	while(t--)
	{
		c1=0;
		c2=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
				c1++;
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
					c2++;
			}
		}
		if(c1==c2)
			printf("YES\n");
		else
			printf("NO\n");

	}
	return 0;
}