#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	long long int n,a,i,j,pos,ith,jth;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n==2)
			cout<<1<<endl;
		else if (n==3)
			cout<<2<<endl;
		else 
			{

			for(i=1;;i++)
				if(pow(2,i)>=n)
				{
					pos=i;
					cout<<pos<<endl;
					// pos=j;
					break;
				}
				a=1;
				j=pos;
			for(i=pos;;)
			{
				// cout<<"again";
				// cout<<ith<<" "<<jth<<endl;
				if(i*j<=n)
				{
					cout<<(ith+jth-2)<<endl;
					break;
				}
				ith = i;
				jth= j;
				if(a%2==0)
					i--;
				else
				{
					j--;
				}
				a++;
				// cout<<ith<<" "<<jth<<endl;
			}
		}
	}
	return 0;
}