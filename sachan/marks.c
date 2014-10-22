#include <stdio.h>
int main()
{
	long int n,i;
	int flag;
	int a[101],b[101],c[101],d[101],e[101],k;
	char s;
	scanf("%ld",&n);
	for(i=0;i<101;i++)
	{
		a[i]=0;
		b[i]=0;
		c[i]=0;
		d[i]=0;
		e[i]=0;
	}
	for(i=0;i<n;i++)
	{
		scanf("%s",&s);
		scanf("%d",&k);
		
		if(s=='A')
			a[k]=1;
		if(s=='B')
			b[k]=1;
		if(s=='C')
			c[k]=1;
		if(s=='D')
			d[k]=1;
		if(s=='E')
			e[k]=1;
 
 
	}
	flag=1;
	for(i=0;i<=100;i++)
	{
		
		if(a[i]==1)
		{
			printf("%ld ",i);
			flag=0;
		}
	}
		if(flag)
			printf("Nothing Unusual");
	
	printf("\n");
flag=1;
	for(i=0;i<=100;i++)
	{
		
		if(b[i]==1)
		{
			printf("%ld ",i);
			flag=0;
		}
	}
		if(flag)
			printf("Nothing Unusual");
	
	printf("\n");
flag=1;
	for(i=0;i<=100;i++)
	{
		
		if(c[i]==1)
		{
			printf("%ld ",i);
			flag=0;
		}
	}
		if(flag)
			printf("Nothing Unusual");
	
	printf("\n");
flag=1;
	for(i=0;i<=100;i++)
	{
		
		if(d[i]==1)
		{
			printf("%ld ",i);
			flag=0;
		}
	}
		if(flag)
			printf("Nothing Unusual");
	
	printf("\n");
flag=1;
	for(i=0;i<=100;i++)
	{
		
		if(e[i]==1)
		{
			printf("%ld ",i);
			flag=0;
		}
	}
		if(flag)
			printf("Nothing Unusual");
	
	printf("\n");
 
	return 0;
}  