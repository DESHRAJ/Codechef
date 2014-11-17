#include<stdio.h>
#include<string.h>
int pal(char a[],long int l)
{
	long int i;
  	for(i=0;i<l/2;i++)
    	if(a[i]!=a[l-1-i])
    {
		return 1;
     }
	return 0;  
}

int main()
{
    int t,m;
    long int len,k,i,j,q;
    char s[100001],r[100001];
    scanf("%d",&t);
    while(t--)
    {
		scanf("%s",s);
		len=strlen(s);
		q=len;
		k=0;
		while(q--)
		{
			j=0;
			for(i=0;i<len;i++)
			{
				if(k!=i)
				{                
					r[j]=s[i];
					j++;
				}
			}
			m=pal(r,len-1);
			k++;
			if(m==0)
			{
				printf("YES\n");
				break;
			}

		}
		if(m==1)
		{ 
			printf("NO\n");
		}
    }
	return 0;
}           