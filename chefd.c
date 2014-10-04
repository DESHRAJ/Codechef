#include<stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	long int n,i,l,r,j;
	int p,one;
	char t1[20];
	scanf("%ld",&n);
	long long int a[n],d;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	long int m;
	scanf("%ld",&m);
	while(m--)
	{
	    i=0;
	    fgets(t1,5,stdin);
	    printf("%s\n",t1 );
		// if(t1[0]=='1')
	 //    {
	 //    	// scanf("%c",&t1[3]);
		//     l =	atoi(t1[2]);
		//     r = atoi(t1[4]);
		//     p = atoi(t1[5]);
		//     for(j=l;j<=r;j++)
		//     {
		//     	if(a[j]%p==0)
		//     	{
		//     		a[j] = a[j]/p;
		//     	}
		//     }
	 //    }
	 //    else if (t1[0]=='2')
	 //    {
	 //    	l = atoi(t1[2]);
	 //    	d = atoi(t1[4]);
	 //    	a[l]= r;
	 //    }
	}
	for(i=0;i<n;i++)
	{
		printf("%lld ",a[i]);
	}
	return 0;
}