#include<stdio.h>
#include<math.h>
int diff=0;
int main()
{
	int n,a,b;
	char w;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&a,&b);
		// printf("%d\n",a-b );
		if(a>b)
		{
			if(diff<=a-b)
			{
				diff= a-b;
				w = 'a';
			}
		}
		else
		{

			if(diff<=b-a)
			{
				diff = b-a;
				w = 'b';
			}
		}
	}
	if(w=='a')
	{
		printf("1 %d",diff);
	}
	else if(w=='b')
	{
		printf("2 %d",diff);
		
	} 
	return 0;
}