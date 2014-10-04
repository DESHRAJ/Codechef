#include <stdio.h>
// using namespace std;
long int count=0,n;
void gcd1(int a,int ptr)
{
	min=1;
	if(a[ptr]%a[ptr+1]!=0 && a[ptr+1]%a[ptr]!=0)
	{
		min+=1;
		ptr+=1;
		gcd1(a,ptr);
	}	

	else
	{
		ptr+=1;
		if(count<=min)
			count = min;
		gcd1(a,ptr);
	}
	printf("%d",min);
}
int main()
{
	int t,i=0,j;
	int a[1000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
			scanf("%d",&a[j]);
		for(i=0;i<n;i++)
			gcd1(a,i);
	}
	return 0;
}