#include<stdio.h>
#include<string.h>
int palendrome(char s[], int ptr)
{
	// printf("palendrome function");
	int j=0,i;
	char s1[1000];
	char s2[1000];
	for(i=0;i<strlen(s);i++)
	{
		if(j!=ptr)
		{
			s1[i] = s[j];
		}
		j++;
	}
	
	// for(i=0;i<strlen(s1);i++)
	// {
		// printf("%c",s1[i]);
	// 	// if(j!=ptr)
	// 	// {
	// 	// 	s1[i] = s[j];
	// 	// }
	// 	// j++;
	// }
			printf("%d",strlen(s1));
	if(strlen(s1)%2==0)
	{
		j = strlen(s1)-1;
			printf("%d",strlen(s1));
		for(i=0;i<strlen(s1)/2;i++)
		{
			printf("%c",s1[j]);
			if(s1[i]!=s1[j])
			{
				return 0;
			}
			j-=1;
		}
		return 1;
	}
	else
	{
		j = strlen(s1)-1;
		for(i=0;i<=strlen(s1)/2;i++)
		{
			if(s1[i]!=s1[j])
			{
				return 0;
			}
			j-=1;
		}
		return 1;
	}
}
int main()
{
	int t,flag,i;
	char s[1000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		flag=0;
		for(i=0;i<strlen(s);i++)
		{
			if(palendrome(s,i)==1)
			{
				flag=1;
				printf("YES\n");
				break;
			}

		}
		if(flag==0)
			printf("NO\n");
	}
	return 0;
}