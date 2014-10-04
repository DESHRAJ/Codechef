#include <stdio.h>
int main()
{
	int t,n,i,j,nn;
	scanf("%d",&t);
	char a[1000][1000];
	while(t)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%s",a[i]);	
		}
		while(n)
		{
		for(i=n-1;i>=0;i--)
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='.')
					
				else
			}
		}
		t-=1;
	
	}

	for(i=0;i<nn;i++)
	{
		for(j=0;j<nn;j++)
			printf("%c",a[i][j]);
	}
	return 0;

}