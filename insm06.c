#include<stdio.h>
int main()
{
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	long int a[n][n],degree;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%ld",&a[i][j]);
	while(m--)
	{
		scanf("%ld",&degree);
		if((degree/90)%4==0)
		{
			// printf("0 case\n");
			for(i=0;i<n;i++)
			{

				for(j=0;j<n;j++)
				{
					printf("%ld ",a[i][j]);
				}
				printf("\n");
			}
		}
		else if ((degree/90)%4==1)
		{
			// printf("1 case\n");
			for(j=0;j<n;j++)
			{
				for(i=n-1;i>=0;i--)
				{
					printf("%ld ",a[i][j]);
				}
				printf("\n");
			}
		}
		else if ((degree/90)%4==2)
		{
			// printf("2 case\n");
			for(i=n-1;i>=0;i--)
			{
				for(j=n-1;j>=0;j--)
				{
					printf("%ld ",a[i][j]);
				}
				printf("\n");
			}
		}
		else if ((degree/90)%4==3)
		{
			// printf("3 case\n");
			for(j=n-1;j>=0;j--)
			{
				for(i=0;i<n;i++)
				{
					printf("%ld ",a[i][j]);
				}
				printf("\n");
			}
		}
		printf("\n");
	}
	return 0;
}