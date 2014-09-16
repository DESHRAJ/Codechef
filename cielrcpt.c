#include<stdio.h>
#include<math.h>
int count = 0;
void menu(long int p)
{
	long int diff,i=0;
	while(pow(2,i)<=p && i<=11) 
	{
		i++;
	}
	i= i-1;
	diff = p - pow(2,i);
	count++;
	if(diff!=0)
		menu(diff);
}
int main()
{
	int t,l,j=0;
	long int p;
	scanf("%d",&t);
	l=t;
	int x[t];
	while(t--)
	{
		count = 0;
		scanf("%ld",&p);
		menu(p);
		x[j]=count;
		j++;
		
	}
	for(j=0;j<l;j++)
	printf("%d\n",x[j]);
	return 0;
}