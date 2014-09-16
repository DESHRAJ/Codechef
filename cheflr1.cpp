#include <cmath>
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
# define size 100000
long int pos = 1;

int main()
{
	int t,i,j=0,le,diff,val;
	char ch[size];
	cin>>t;
	le =t;
	int x[t];
	while(t!=-1)
	{	pos=1;
		int val=0,level=0;
		cin.getline(ch,100000);
		for(i=0;i<strlen(ch);i++)
		{
			if(ch[i]=='l')
			{
				pos = 2*pos;
			}
			else if(ch[i]=='r')
			{
				pos = (2*pos) +1;
			}
		}
		for(i=0;;i++)
		{
			if(pow(2,i)<=pos && pos<=(pow(2,i+1)-1))
			{
				level = i;
				break;
			}
		}
		if(level%2!=0)
		{
			for(i=1;i<level;i+=2)
			{
				val = val + pow(2,i);
			}
			val = 2*val +2;
			diff = pos - pow(2,level);
			val = val + 2*diff;
		}
		else 
		{
			for(i=0;i<level;i+=2)
			{
				val = val + pow(2,i);
			}
			val = 2*val +1;
			diff = pos - pow(2,level);
			val = val + 2*diff;
		}
		x[j]=val;
		j++;
		t--;
	}
	for(j=1;j<=le;j++)
	{
		cout<<x[j]<<endl;
	}

	return 0;
}