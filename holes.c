#include<stdio.h>
#include<string.h>
int main()
{
 char a[100];
 int i,c,t,k=0,le;
 scanf("%d",&t);
 int x[t];
 le = t;
 while(t--)
 {      scanf("%s",a);
    c=0;
    for(i=0;i<strlen(a);i++)
    {
 
        if((a[i]=='A')|| (a[i]=='P')||(a[i]=='D')||(a[i]=='R')||(a[i]=='O')||(a[i]=='Q'))
            c++;
        else if(a[i]=='B')
            c=c+2;
    }
    x[k]=c;
    k++;
 }
 for(k=0;k<le;k++)
     printf("%d\n",x[k]);
 return 0;
}