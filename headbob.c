#include<stdio.h>
int main()
{
	int t,i,n,f_n,f_y,f_i;
	char a[1000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%s",a);
		f_n=0;
		f_y=0;
		f_i=0;
		for(i=0;i<n;i++)
		{
			if(a[i]=='N')
				f_n=1;
			else if(a[i]=='Y')
				f_y=1;
			else if (a[i]=='I')
				f_i=1;
		}
		// if(f_i==1 && f_y==1)
		// 	printf("NOT SURE \n");
		 if(f_i==1)
			printf("INDIAN \n");
		else if ((f_n==1 && f_y==1) || f_y==1)
			printf("NOT INDIAN\n");	
		else
			printf("NOT SURE\n");
	}
	return 0;
}