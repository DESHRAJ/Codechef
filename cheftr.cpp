# include<iostream>
using namespace std;
long long int fact(long long int n)
{
	if(n==1)
		return 1;
	else 
		return n*fact(n-1);
}
int main()
{
	int t;
	long long int n,k,sum;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		sum = (fact(n)/(fact(n-3)*fact(3))) - (fact(k)/(fact(k-3)*fact(3)));	// printf("%lld \n",sum);
		cout<<sum<<endl;
	}
	return 0;
}