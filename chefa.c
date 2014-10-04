#include<stdio.h>
void makeheap ( long long int x[ ],long long int n )
{
    long long int val, s, f ;
    long long int i;
    for ( i = 1 ; i < n ; i++ )
    {
        val = x[i] ;
        s = i ;
        f = ( s - 1 ) / 2 ;
        while ( s > 0 && x[f] < val )
        {
            x[s] = x[f] ;
            s = f ;
            f = ( s - 1 ) / 2 ;
        }
        x[s] = val ;
    }
}

void heapsort ( long long int x[ ],long long int n )
{
    long long int  s, f, ivalue ;
    long long int i;
    for ( i = n - 1 ; i > 0 ; i-- )
    {
        ivalue = x[i] ;
        x[i] = x[0] ;
        f = 0 ;

        if ( i == 1 )
            s = -1 ;
        else
            s = 1 ;

        if ( i > 2 && x[2] > x[1] )
            s = 2 ;

        while ( s >= 0 && ivalue < x[s] )
        {
            x[f] = x[s] ;
            f = s ;
            s = 2 * f + 1 ;

            if ( s + 1 <= i - 1 && x[s] < x[s + 1] )
                s++ ;
            if ( s > i - 1 )
                s = -1 ;
        }
        x[f] = ivalue ;
    }
}
int main()
{
	int t;
	long long int n,i;
	long long int sum=0;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%lld",&n);
		long long int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		makeheap(a,n);
		heapsort(a,n);
		for(i=n-1;i>=0;i=i-2)
		{
			sum = sum+a[i];
		}
		printf("%lld\n",sum);
	}
	return 0;
}