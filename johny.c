#include<stdio.h>
#define MAX 100
long long int a[100],key;
void mergeSort(long long int arr[],int low,int mid,int high);
void partition(long long int arr[],int low,int high);
void partition(long long int arr[],int low,int high){

    int mid;

    if(low<high){
         mid=(low+high)/2;
         partition(arr,low,mid);
         partition(arr,mid+1,high);
         mergeSort(arr,low,mid,high);
    }
}

void mergeSort(long long int arr[],int low,int mid,int high){

    int i,m,k,l,temp[MAX];

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

int main()
{
	int t,n,k,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++)
			scanf("%lld",&a[i]);
		scanf("%d",&k);
		key = a[k];
		partition(a,1,n);
		for(i=1;i<=n;i++)
		{

			if(key==a[i])
			{
				printf("%d \n",i);
				break;
			}
		}

	}
	return 0;
}