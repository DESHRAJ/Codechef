#include<bits/stdc++.h> 
using namespace std;
long long int reverse(long long int n)
{
	 long long int rev = 0;
	 while(n>0){
	 	rev = rev*10+n%10;
	 	n = n/10;
	 }
	 return rev;
}

int main()
{
	long long int t,m,n,total;
	cin>>t;
	while(t--){
		cin>>m>>n;
		m = reverse(m);
		n = reverse(n);
		total = reverse(m+n);
		cout<<total<<"\n";
	}
	return 0;
}
