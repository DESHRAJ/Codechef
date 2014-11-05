#include<iostream>
using namespace std;
int main()
{
	int n,m,cp[10],sp[10][10],max,i,j,sum;

	cin>>m;
	cin>>n;
	int t[n][m];
	for(i=0;i<m;i++)
	{
		cin>>cp[i];
	}
	for(i=0;i<n;i++)
	{

		for(j=0;j<m;j++)
		{
			cin>>sp[i][j];
			t[i][j]=sp[i][j]-cp[j];
		}
	}
	sum=0;
	for(i=0;i<n;i++)
	{
	max=0;

		for(j=0;j<m;j++)
		{
			if(t[j][i]>max)
				max=t[j][i];
		}
		sum+=max;
	}
	// max=t[0];
	// for(i=1;i<n;i++)
	// {
	// 	if(t[i]>max)
	// 		max=t[i];
	// }
	cout<<sum-1;
	return 0;
}