#include<iostream>
using namespace std;
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
	int t,i,n;
	long long int s[5000],min;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>s[i];
			// scanf("%lld",&s[i]);
		}
		partition(s,0,n-1);
		min = s[1]-s[0];
		for(i=1;i<n-1;i++)
		{
			if(min>=s[i+1]-s[i])
				min=s[i+1]-s[i];
		}
		// printf("%lld\n",min);
		cout<<min<<endl;
	}
	return 0;
}