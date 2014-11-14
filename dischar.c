#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	char s[26];
	while(t--)
	{
		char n[1][];
		scanf("%s",n);
		for(i=0;i<strlen(n)-1;i++)
		{
		for(j=0;j<26;j++)
			if(n[i]!=s[j])
				s[j]=n[i];
			else
				break;
		}

	}
}