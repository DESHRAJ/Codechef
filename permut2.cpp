#include<bits/stdc++.h>
#include<vector>
using namespace std;

// typedef long int flag;
// typedef long int i;
// typedef long int n;

int main()
{
 	vector<long int>a;
 	// vector<int>b;
 	long int flag,i,n,x,z;
 	while(1)
 	{
 		flag = 0;
 		cin>>n;
 		if(n==0)
 		{
 			break;
 		}
 		long int b[n+1];
 		b[0] = 0;
		a.resize(0);
 		a.push_back(0);
 		for(i=1;i<=n;i++)
 		{ 
 			cin>>x;
 			a.push_back(x);
 		}
 		for(i=1;i<=n;i++)
 		{
 			z = a[i];
 			b[z]=i;
 		}
 		for(i=1;i<=n;i++)
 		{

 			if(b[i]!=a[i])
 			{
 				flag = 1;
 				break;
 			}
 		}
 		if(flag)
 			cout<<"not ambiguous \n";
 		else
 			cout<<"ambiguous \n";
 	}

 	return 0;
 }