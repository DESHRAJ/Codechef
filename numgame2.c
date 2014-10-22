#include<stdio.h>
#include<math.h>
int count=1;
void prime(int n)
{
	 int i,j;
	int flag=0;
	if(n==1)
	{
		if(count%2!=0)
			printf("ALICE\n");
		else 
			printf("BOB\n");
	}
	else if(n==2)
	{
		n-=1;
		count+=1;
		if(count%2!=0)
			printf("ALICE\n");
		else 
			printf("BOB\n");
	}
	else
	{
		for(j=n-1;j>1;j--)
		{
			flag=0;

			for(i=sqrt(n);i>1;i--)
			{

				if(j%i==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				n=n-j;
				count+=1;
				prime(n);
			}
		}
	}
}
int main()
{
	int t;
	int n;
	scanf("%d",&t);
	while(t--)
	{
		count=1;
		scanf("%d",&n);
		prime(n);
	}
	return 0;

}