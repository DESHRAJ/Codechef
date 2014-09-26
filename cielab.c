#include<stdio.h>
int main()
{
	int a,b,r;
	scanf("%d %d",&a, &b);
	int result;
	result = a-b;
	r = result%10;
	result = result - r;
	if(r !=1 && r<9)
	{
		result = result+1+r;
	}
	else if (r==9)
	{
		result  = result+8;
	}
	else if(r==1)
	{
		result = result +2;
	}
	printf("%d\n",result );
	return 0;
}