#include<stdio.h>
int main()
{
	long long int n,m,i,j,v,p;
	scanf("%lld %lld",&n,&m);
	long long int id[n],attr[n],val[n],priority[n],qid,qattr;
	for(i=0;i<n;i++)
	{
		scanf("%lld %lld %lld %lld",&id[i],&attr[i],&val[i],&priority[i]);
		
	}
	for(i=0;i<m;i++)
	{
		scanf("%lld %lld",&qid,&qattr);
		v=0;
		p=1000001;
		for(j=0;j<n;j++)
		{
			if(qid==id[j] && qattr==attr[j])
			{
				if(p==priority[j] && val[j]>v)
				{
					p=priority[j];
					v=val[j];
				}
				else if(p>priority[j] && val[j]>v)
				{
					p=priority[j];
					v=val[j];
				}
			}
		}
		printf("%lld\n",v);
	}
	return 0;
}