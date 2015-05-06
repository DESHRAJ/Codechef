#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int m;
void markMultiples(bool arr[], int a, int n)
{
    int i = 2, num;
    while ( (num = i*a) <= n )
    {
        arr[ num-1 ] = 1;
        ++i;
    }
}
 
void SieveOfEratosthenes(int n)
{
    if (n >= 2)
    {
        bool arr[n];
        memset(arr, 0, sizeof(arr));
        for (int i=m; i<=n;i++)
        {
            if ( arr[i] == 0 )
            {
                cout<<i+1;
                markMultiples(arr, i+1, n);
            }
        }
    }
}
 
int main()
{
	int t,flag;
	long int n,i,j;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
			// for(i=m;i<=n;i++)
			// {
    			SieveOfEratosthenes(n);
			// }
		cout<<endl;
	}
	return 0;

}
