#include<stdio.h>
long long int c =0,count=0,n,m,glob;
long long int smallest(long long int a[n][m], long long int p, long long int q) {
  c=p;
  long long int min,pos;
  if(q!=0 && q!=m)
  {

	  if(a[p][q-1]<a[p][q])
	  {

	  	if(a[p][q-1]<a[p][q+1] )
	  	{
	  		min = a[p][q-1];
	  		pos = q-1;
	  	}
	  	else
	  	{
	  		min = a[p][q+1];
	  		pos = q+1;
	  	} 
	  }
	  else 
	  {

		if(a[p][q]<a[p][q+1])
	  	{
	  		min = a[p][q];
	  		pos = q;
	  	}
	  	else
	  	{
	  		min = a[p][q+1];
	  		pos = q+1;
	  	} 
	  }
  }
  else if(q==m-1)
  {
  	if(a[p][q-1]<a[p][q])
  	{
  		min = a[p][q-1];
  		pos = q-1;
  	}
  	else 
  	{
  		min = a[p][q];
  		pos = q;
  	}
  }
  else if(q==0)
  {
  	if(a[p][q]<a[p][q+1])
  	{
  		min = a[p][q];
  		pos = q;
  	}
  	else 
  	{
  		min = a[p][q+1];
  		pos = q+1;
  	}
  }


  // printf("the min is %lld and psition is %lld \n \n ",min,pos);
  count+=min;
  if(c<glob-1)
  {
  	smallest(a,p+1,pos);
  }
  else
  {
  	// printf("%lld\n ",count);
  	return count;
  }
}

long long int main()
{
	long long int k,t,i,j,flag=0,x,p,value,q;
	scanf("%d",&k);
	while(k--)
	{
		count=0;
		scanf("%lld",&t);
		scanf("%lld %lld",&n,&m);
		glob = n;
		long long int a[n][m];
		for(i=0;i<n;i++)
		{
			for (j = 0; j < m; j++)
			{
				scanf("%lld",&a[i][j]);
			}
		}
		p=0;
		for(x=0;x<m;x++)
		{
			// count = 0;
			value = smallest(a,p,x);
			// printf("%lld\n \n \n \n ",value);
			if(value<t)
			{
				flag=1;
				break;
			}
			else 
				flag=0;
		}
		if(flag==1)
		{
			printf("YES\n");	
		}
		else 
		{
			printf("NO\n");		
		}
	}
	return 0;
}
