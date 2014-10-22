#include <iostream>
using namespace std;
int main()
{
	int t,i,temp,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n==1)
			cout<<"0";
		else
		{	
			for(i=1;;i++)
			{
				if(2*i>=n)
				{
					temp=i;
					break;
				}

			}
			cout<<temp<<endl;
		}
	}
	return 0;
}