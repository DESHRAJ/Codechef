#include<stdio.h>
int main()
{
	int i=4;
	int sum,sum1,sum2;
	sum = ++i + ++i + ++i;
	i=4;
	sum1 = ++i + ++i;
	printf("%d",sum1);
	i=4;
	sum2 = ++i;
	printf("%d %d %d",sum,sum1,sum2);
	return 0;
}