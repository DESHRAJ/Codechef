#include<stdio.h>
#include<math.h>
int main()
{
	int t,a[10],c[10],len=0,flag=0,r,i,n,x;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<=9;i++)
		{
			scanf("%d",&a[i]);
		}
		n=1;
		x=n;
		while(1)
		{
			for(i=0;i<=9;i++)
			c[i]=a[i];
				
			for(; n != 0; n /= 10, len++);
			for(i=0;i<=len-1;i++)
			{
				r = x%10;
				if(c[r]!=0)
				{
					c[r]=c[r]-1;
				}
				x=x/10;
			}
			for(i=0;i<=9;i++)
			{
				if(c[i]<0)
				{
					printf("%d",x);
					flag=1;
					break;
				}
			}
			if(flag==1)
				break;
			else
				x++;
		}
	}
	return 0;
}