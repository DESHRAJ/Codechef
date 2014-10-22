#include<stdio.h>
#include<math.h>
int d[10000];
long int t,n,pos;
long long int calc(long int pos)
{
	long long int count=0;
	long int i;
	for(i=0;i<n;i++)
	{
		if(d[i]<0)
		{
			if(abs(d[i])<d[pos])
			{
				count = count +(abs(d[i])*abs(i-pos));
				d[pos]+=d[i];
				d[i]=0;
				if(d[pos]==0)
					return count;
			}
			else if (abs(d[i])>d[pos])
			{
				count=count+(d[pos]*abs(i-pos));
				d[i]+=d[pos];
				d[pos]=0;
				return count;
			}
			else 
			{
				count = count+ (abs(i-pos)*d[pos]);
				d[pos]=0;
				d[i]=0;
				return count;
			}
		}
	}
}
int main()
{
	long int i;
	long long int sum;
	scanf("%ld",&t);
	while(t--)
	{
		sum=0;
		scanf("%ld",&n);
		for(i=0;i<n;i++)
			scanf("%d",&d[i]);
		for(i=0;i<n;i++)
		{
			if(d[i]>0)
			{
				sum+=calc(i);
			}
		}
		printf("%lld\n",sum);
	}
	return 0;

}