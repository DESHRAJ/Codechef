#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int t,flag;
	long int m,n,i,j;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		if(n-m<=100000 && m<=1000000000 && n<=1000000000)
		{
			for(i=m;i<=n;i++)
			{
				flag=0;
				if(i==2)
					cout<<"2"<<endl;
				if(i==5)
					cout<<"5"<<endl;
				else if(i>2 && i%2 != 0 && i%10 != 5  )
				{
					for(j=2;j<=i/2;j++)
					{
						if(i%j==0)
						{
							flag=1;
							break;
						}
					}
					if(flag==0)
						cout<<i<<endl;
				}
			}
		}
		cout<<endl;
	}
	return 0;

}
