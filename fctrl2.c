#include<stdio.h>
unsigned long long int fact(int n)
{
	if(n==1)
		return 1;
	else 
		return n*fact(n-1);
}
int main()
{
	int t,k=0,le;
	scanf("%d",&t);
	unsigned long long int  x[t];	
	while(t--)
	{
		int n;
		scanf("%d",&n);
		if(n>=1)
		{
			x[k] = fact(n);
			k++;
		}
	}
	for(t=0;t<k;t++)
		printf("%llu \n",x[t]);
	return 0;
}