#include<stdio.h>
int main()
{
	char a[8][8];
	int i,j,k,l, posi,posj;
	for(i=0;i<8;i++)
	{
		// for(j=0;j<8;j++)
		// {
		scanf("%s",a[i]);
		//	scanf("%c %c %c %c %c %c %c %c",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4],&a[i][5],&a[i][6],&a[i][7]);
		// }
		//a[i]=s;
	}
// for(i=0;i<8;i++)
// {
// 		for(j=0;j<8;j++)
// 		{
// 			printf("%c",a[i][j]);
			
// 		}
// 		printf("\n");
// }
	for(i=0;i<8;i++)
	{

		for(j=0;j<8;j++)
		{
			// printf("%c\n ",a[i][j]);
			if(a[i][j]=='S')
			{
				if(a[i][j+1]!='P')
				{
					a[i][j+1]='*';		
				}
				if(a[i][j-1]!='P')
				{
					a[i][j-1]='*';		
				}
				if(a[i+1][j]!='P')
				{
					a[i+1][j+1]='*';		
				}
				if(a[i-1][j]!='P')
				{
					a[i-1][j+1]='*';		
				}
				if(a[i+1][j+1]!='P')
				{
					a[i+1][j+1]='*';		
				}
				if(a[i-1][j-1]!='P')
				{
					a[i-1][j-1]='*';		
				}
				if(a[i-1][j+1]!='P')
				{
					a[i-1][j+1]='*';		
				}
				if(a[i+1][j-1]!='P')
				{
					a[i+1][j-1]='*';		
				}
			}
			else if(a[i][j]=='B')
			{
				for(k=i,l=j;(k<8 && l<8);k++,l++)
						a[k][l]='*'
				for(k=i,l=j;(k>=0 && l<8);k--,l++)
						a[k][l]='*';
				for(k=i,l=j;(k>=0 && l>=0);k--,l--)
						a[k][l]='*';
				for(k=i,l=j;(k<8 && l>=0);k++,l--)
						a[k][l]='*';
				
			}
			else if (a[i][j]=='R')
			{
				if(a[i-1][j+1]!='P')
				{
					a[i-1][j+1]='*';		
				}

				if(a[i-1][j-1]!='P')
				{
					a[i-1][j-1]='*';		
				}
			}
			else if (a[i][j]=='Q')
			{
				for(k=i,l=j;(k<8 && l<8);k++,l++)
						a[k][l]='*'
				for(k=i,l=j;(k>=0 && l<8);k--,l++)
						a[k][l]='*';
				for(k=i,l=j;(k>=0 && l>=0);k--,l--)
						a[k][l]='*';
				for(k=i,l=j;(k<8 && l>=0);k++,l--)
						a[k][l]='*';
			}
			else if (a[i][j]=='P')
			{
				posi=i;
				posj=j;
			}
		}
	}
	if( a[posi][posj+1]!='*' || (a[posi][posj-1]!='*') || (a[posi+1][posj]!='*') || (a[posi-1][posj]!='*') || (a[posi+1][posj+1]!='*') || (a[posi-1][posj-1]!='*') || (a[posi-1][posj+1]!='*')  || (a[posi+1][posj-1]!='*'))
	{
		printf("NOT REALLY!\n");
		// a[i][j+1]='*';		
	}
	else 
		printf("CHECKMATE!\n");
	return 0;
	
}