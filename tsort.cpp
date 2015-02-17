#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	vector<int>a;
 	long long int t,i,n;
 	cin>>t;
 	for(int i=0;i<t;i++)
 	{
 		cin>>n;
 		a.push_back(n);
 	}	
 	sort(a.begin(), a.end());
 	for (i = 0; i < t; ++i)
 		cout<<a[i]<<"\n";
 	return 0;
}