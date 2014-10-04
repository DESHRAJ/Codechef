// #include<stdio.h>
// int main()
// {
// 	int t;
// 	scanf("%d",&t);

// }
#include<stdio.h>
int gcd(int a,int b)
{
    if(b>a)
    return gcd(b,a);
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    int k=gcd(a,b);
    a/=k;
    return a*b;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		
    int n=sizeof a/sizeof a[0];
    int n1=n;
    int k=a[0];
    n--;
    while(n>=1)
    {
           k=lcm(k,a[n--]);
    }
    printf("LCM of N numbers is: %d\n",k);
	}	
    return 0;
}