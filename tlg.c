#include<stdio.h>
#include<math.h>
int diff=0;
int main()
{
	int n,a,b,p=0,q=0;
	int w;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&a,&b);
		// printf("%d\n",a-b );
		a+=p;
		b+=q;
		if(a>b)
		{
			if(diff<a-b)
			{
				diff= a-b;
				w = 1;
			}
		}
		else if(b>a)
		{

			if(diff<b-a)
			{
				diff = b-a;
				w = 2;
			}
		}
		p=a;
		q=b;


	}
	printf("%d %d",w,diff);
		
	return 0;
}