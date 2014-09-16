#include<stdio.h>
#include<string.h>

int main()
{
	int t,i,j,k=0;
	scanf("%d",&t);
	int x[t];
	while(t--)
	{
		char s[200];
		int count = 0;
		scanf("%s",s);
		for(i=0;i<strlen(s);i++)
		{
			if(s[i]!='1')
			{
				for(j=i+1;j<strlen(s);j++)
				{
					if(s[i]==s[j])
					{
						s[j]='1';
						break;
					}
				}
				count++;
			}
		}
		x[k]=count;
		k++;
	}
	for(i=0;i<k;i++)
	{
		printf("%d\n",x[i]);
	}
	return 0;

}