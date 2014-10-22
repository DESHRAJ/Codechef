#include<stdio.h>
#include<math.h>
int main()
{
	int t,b,ls;
	float min,max;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&b,&ls);
		min = sqrt((ls*ls)-(b*b));
		max = sqrt((ls*ls)+(b*b));
		printf("%.6f %.6f \n",min,max);
	}
	return 0;
}