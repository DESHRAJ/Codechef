#include<stdio.h>
#include<math.h>
int primecheck(long long  int a)
{
	if (a==2)
		return 2;
	else if(a>2)
	{
		int flag=0,i;
		for(i=2; i<=sqrt(a); i++)
		{
			if(a%i==0)
				{
					flag=1;
					break;
				}
		}
		if(flag==0)
		{
			return a;
		}
		else 
		{
			return 0;
		}
	}
	else 
		return 0;
}
// using namespace std;
int main()
{
	int t,i,j,p=0,q;
	scanf("%d",&t);
	long int x[100][t];
	while(t--)
	{
		q=0;
		long long int a,b;
		scanf("%lld %lld",&a,&b);
		for(i=a;i<=b;i++)
		{
			// if(a>=1 && b>=1 && b<=1000000000 && a<=1000000000 && b-a<=100000)
			if(primecheck(i))
			{
				x[p][q]=i;
				q++;
			}
		}
	p++;
	}
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%ld",x[i][j]);
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
