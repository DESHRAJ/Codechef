#include<stdio.h>
int main()
{
	long int n,flag=0;
	int m,i,j;
	scanf("%d",&m);
	scanf("%ld",&n);
	long int a[m][m];
	for(j=0;j<m;j++)
	for(i=0;i<m;i++)
	{
		scanf("%ld ",&a[j][i]);
		if(n==a[j][i])
		{
			// printf("YES");
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}