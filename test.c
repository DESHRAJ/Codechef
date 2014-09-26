#include<stdio.h>
int main()
{
	int n,len;
	scanf("%d",&n);
	for(; n != 0; n /= 10, len++);
			printf("%d\n",len);
	return 0;
}