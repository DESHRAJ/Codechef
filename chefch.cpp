#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	char a[100000];
	int t;
	cin>>t;
	while(t--)
	{
		cin.getline(a,100000);
		cout<<a;
	}
	return 0;
}