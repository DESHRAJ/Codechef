#include<stdio.h>
#include<math.h>
int dist(int a[], int b[])
{
	return sqrt((b[1]-a[1])*(b[1]-a[1])+(b[0]-a[0])*(b[0]-a[0]));
}
int main()
{
	int t,r,a[2],b[2],c[2];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&r);
		scanf("%d %d",&a[0],&a[1]);
		scanf("%d %d",&b[0],&b[1]);
		scanf("%d %d",&c[0],&c[1]);
		if((dist(a,b) <=r && dist(b,c)<=r) || (dist(a,c) <=r && dist(b,c)<=r) || (dist(b,a) <=r && dist(a,c)<=r))
		{
			printf("yes\n");
		}
		else 
			printf("no\n");
	}
	return 0;
}