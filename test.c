#include<stdio.h>
int main()
{
	int a,x[100],i=0,j;
	while(a!=42)
	{
		scanf("%d",&a);
		if(a>=0 && a<=99 && a!=42)
		{
			x[i]=a;
			i++;
		}
	}
	for(j=0;j<i;j++)
		printf("%d\n",x[j]);
	return 0;
}