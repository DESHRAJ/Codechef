#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
char *decimal_to_binary(long long int);
int main()
{
	int t;
	long long int n,j,i,k;
	long long int num,den;
	int c;
	char a[32], *pointer;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		num=0;
		for(j=0;j<n;j++)
		{
				pointer = decimal_to_binary(j);
				strcpy(*pointer, a);
			for(i=0;i<32;i++)
			{
				// printf("%s",pointer);
				if(a[i]=='1')
				{
					for(k=i+1;k<32;k++)
					{
						if(k=='0')
						{
							num++;
							printf("%lld \n",num);
						}
					}
				}
			}
 			free(pointer);
 			den = pow(2,n);
		}
		for(i=2;i<=num/2;i++)
		{
			if(num%i==0 && den%i==0)
			{
				num= num/i;
				den = den/i;
			}
		}
		// if(den%num==0)
		// {
		// 	num=1;
		// 	den = den/num;
		// }
		printf("%lld/%lld \n",num,den);

	}
	return 0;
}

char *decimal_to_binary(long long int n)
{
   long long int c, d, count;
   char *pointer;
 
   count = 0;
   pointer = (char*)malloc(32+1);
 
   if ( pointer == NULL )
      exit(EXIT_FAILURE);
 
   for ( c = 31 ; c >= 0 ; c-- )
   {
      d = n >> c;
 
      if ( d & 1 )
         *(pointer+count) = 1 + '0';
      else
         *(pointer+count) = 0 + '0';
 
      count++;
   }
   *(pointer+count) = '\0';
 
   return  pointer;
}