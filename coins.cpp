#include<bits/stdc++.h>
using namespace std;

long long int func(long long int x)
{
	cout<<(int(x/2)+int(x/3)+int(x/4))<<"\n";
}
int main()
{
	long long int x;
	while(cin>>x)
	{
		func(x);
	}
	return 0;
}