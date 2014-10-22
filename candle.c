#include<stdio.h>
#include<math.h>
int main()
{
	int t,a[10],c[10],len=0,flag=0,r,i,n,x;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<=9;i++)
		{
			scanf("%d",&a[i]);
		}
		min=10;
		for(i=1;i<n;i++)
			if(a[i]<min)
			{
				min = a[i];
				pos = i;
			}
		a[i]-=1;	
		b[j]=min;
		j++;

	}
	return 0;
}