#include <stdio.h>
int main()
{
    int n,k,a,i;
    int c=0;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        if(a%k==0){
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}