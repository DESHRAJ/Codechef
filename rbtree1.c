#include<stdio.h>
#include<math.h>

int k;
long long int x,y,sum,sum1;

long long int otoo(int i,int j)
{
    sum1=pow(2,j-1)-pow(2,i)-1;
    return sum1;
}

long long int otoe(int i,int j)
{
    sum1=y-pow(2,i);
    return sum1;
}

long long int etoe(int i,int j)
{
    sum1=y-x;
    return sum1;
}

long long int etoo(int i,int j)
{
    sum1=pow(2,j-1)-1-x;
    return sum1;
}

long long int black(int i,int j)
{  
    if(i%2==0 && j%2==0)
    {
        sum=etoe(i,j);
    }
    else if(i%2==0 && j%2!=0)
    {

        sum=etoo(i,j);

    }
    else if(i%2!=0 && j%2==0)
    {
        sum=otoe(i,j);

    } 

    else if(i%2!=0 && j%2!=0)
    {
        sum=otoo(i,j);

    }
    for(k=i+1;k<j;k++)
    { 
        if(k%2!=0)
        {
             sum-=pow(2,k);
        }
    }
    return sum;
}


long long int red(int i,int j)
{
    if(i%2==0 && j%2==0)
    {
        sum=otoo(i,j);

    }
    else if(i%2==0 && j%2!=0)
    {
        sum=otoe(i,j);

    }
    else if(i%2!=0 && j%2==0)
    {
        sum=etoo(i,j);
    } 

    else if(i%2!=0 && j%2!=0)
    {
        sum=etoe(i,j);
    }

    for(k=i+1;k<j;k++)
    { 
        if(k%2==0)
        { 
            sum-=pow(2,k);
        }
    }

    return sum;
}



int main()
{
    long int q;
    int i,j,flag=0;
    long long int res;
    char s[3];
    scanf("%ld",&q);
    while(q--)
    {
        scanf("%s",s);
        scanf("%lld",&x);
        scanf("%lld",&y);
        for(i=0;i<50;i++)
        {
            if(pow(2,i)>x)
            { 
                break;
            }
        } 
        for(j=0;j<50;j++)
        {
            if(pow(2,j)>y)
            {
                 break;
            }
        }

        if(s[1]=='b')
        {
            if(flag==0)
            { 
                res=black(i,j);  }
            else
            { 
                res=red(i,j); 
            }
        }

        else if(s[1]=='r')
        {
            if(flag==0)
            { 
                res=red(i,j);  
            }
            else
            {    
                res=black(i,j); 
            }
        }

        else if(s[i]=='i')
            {  
                if(flag==0)
                { 
                    flag=1; 
                }
                else
                { 
                    flag=0; 
                }
            }
        printf("%lld\n",res);
    }
return 0;
}