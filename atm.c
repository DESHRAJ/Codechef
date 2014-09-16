#include<stdio.h>
int main()
{
	int w;
	float bal;
	scanf("%d %f",&w,&bal);
	if(w%5==0 && .5<=bal-w)
	{
		bal = bal -(float)w- 0.50;
		printf("\n%.2f",bal);
	}
	else
		printf("%.2f",bal);
	
	return 0;
}