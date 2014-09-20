#include<stdio.h>
# define MAX 10000
int main()
{
	int t,i,count,n;
	scanf("%d",&t);
	int s[MAX];
	while(t--)
	{
		count = 1;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&s[i]);
		}
		for(i=0;i<n-1;i++)
		{
			if(s[i+1]>s[i])
				s[i+1]= s[i];
			else 
				count++;
		}
		printf("%d\n ",count);
	}
	return 0;
}