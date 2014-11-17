#include<stdio.h>
void mergeSort(long long int arr[],int low,int mid,int high){

    int i,m,k,l,temp[5000];

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high)){

         if(arr[l]<=arr[m]){
             temp[i]=arr[l];
             l++;
         }
         else{
             temp[i]=arr[m];
             m++;
         }
         i++;
    }

    if(l>mid){
         for(k=m;k<=high;k++){
             temp[i]=arr[k];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++){
             temp[i]=arr[k];
             i++;
         }
    }
   
    for(k=low;k<=high;k++){
         arr[k]=temp[k];
    }
}
void partition(long long int arr[],int low,int high){

    int mid;

    if(low<high){
         mid=(low+high)/2;
         partition(arr,low,mid);
         partition(arr,mid+1,high);
         mergeSort(arr,low,mid,high);
    }
}

int main()
{
	int t,n,m,i,j;long long int sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		long long int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		partition(a,0,n-1);
		for(j=n-1;m!=0;j--)
		{
			sum+=a[j];
			m--;
		}
		printf("%lld\n",sum );

	}
	return 0;
}