#include <stdio.h>
// using namespace std;
 int count=0,m,min=1,temp=0;
void gcd1(int a[],int ptr)
{
	if(m>2)
	{

		m--;
		if(a[ptr]%a[ptr+1]!=0 && a[ptr+1]%a[ptr]!=0 && a[ptr]%a[ptr+2]!=0 && a[ptr+2]%a[ptr]!=0 && a[ptr+1]%a[ptr+2]!=0&& a[ptr+2]%a[ptr+1]!=0)
		{
			min+=1;
			ptr+=1;
					printf("if wala %d %d  and %d\n",a[ptr],a[ptr+1],min );

			gcd1(a,ptr);
		}	

		else
		{
			if(temp<=min)
			{
				temp = min;
			}
			min=1;
			ptr+=1;
					printf(" else wala %d %d and %d\n",a[ptr],a[ptr+1],min );
			gcd1(a,ptr);

		}
	}
	else
		printf("%d\n",temp );
}
int main()
{
	int t,i=0,j,n;
	int a[1000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		m=n;
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		gcd1(a,0);
	}
	return 0;
}