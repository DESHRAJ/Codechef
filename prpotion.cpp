#include<iostream>
using namespace std;
int main()
{
	int t,R,G,B,M,i,pos,j;
	char a;
	long long int r[100],g[100],b[100],max;
	cin>>t;
	while(t--)
	{
		cin>>R>>G>>B>>M;
		max=0;
		for(i=0;i<R;i++)
		{
			cin>>r[i];
			if(r[i]>=max)
			{
				max=r[i];
				// pos=i;
				a='r';
			}
		}	
		for(i=0;i<G;i++)
		{
			cin>>g[i];
			if(g[i]>=max)
			{
				max=g[i];
				// pos=i;
				a='g';
			}
		}
		for(i=0;i<B;i++)
		{
			cin>>b[i];
			if(b[i]>=max)
			{
				max=b[i];
				// pos=i;
				a='b';
			}
		}




		
		for(i=0;i<M;i++)
		{
			max=0;
			if(a=='r')
			{
				for(j=0;j<R;j++)
				{
					r[j]=int(r[j]/2);
					// if(r[j]>=max)
					// {
					// 	// a='r';
					// 	max=r[j];
					// }
				}
			}
			else if (a=='g')
			{
				for(j=0;j<G;j++)
				{
					g[j]=int(g[j]/2);
					// if(g[j]>=max)
					// {
					// 	// a='g';
					// 	max=g[j];
					// }
				}
			}
			else if (a=='b')
			{
				for(j=0;j<B;j++)
				{
					b[j]=int(b[j]/2);
					// if(b[j]>=max)
					// {
					// 	// a='b';
					// 	max=b[j];
					// }
				}
			}
			max=0;
			for(j=0;j<R;j++)
			{
				if(r[j]>=max)
				{
					max=r[j];
					a='r';
				}
			}
			for(j=0;j<G;j++)
			{
				if(g[j]>=max)
				{
					max=g[j];
					a='g';
				}
			}
			for(j=0;j<B;j++)
			{
				if(b[j]>=max)
				{
					max=b[j];
					a='b';
				}
			}
		}
		max=0;
		for(i=0;i<R;i++)
		{
			if(r[i]>=max)
				max=r[i];
		}
		for(i=0;i<G;i++)
		{
			if(g[i]>=max)
				max=g[i];
		}
		for(i=0;i<B;i++)
		{
			if(b[i]>=max)
				max=b[i];
		}
		cout<<max<<endl;
	}
	return 0;
}