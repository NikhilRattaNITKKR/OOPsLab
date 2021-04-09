#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int arr[],int l,int r){
	int pivot=arr[l];
	int i=l,j=r;
	while(i<j){
		do{
			i++;
		}while(arr[i]<=pivot);
		do{
			j--;
		}while(arr[j]>pivot);
	  if(i<j){ swap(&arr[i],&arr[j]); }
	}
	swap(&arr[l],&arr[j]);
	return j;
}


void quicksort(int arr[], int l, int r) {
int j;
 if(l<r){

 	j=partition(arr,l,r);
 	quicksort(arr,l,j);
    quicksort(arr,j+1,r);
 }
}




int main(){

int i,n=5,arr[5];
for(i=0;i<n;i++){
	cin>>arr[i];
}

quicksort(arr,0,n);
for(i=0;i<n;i++){
	cout<<arr[i]<<"\t";
}
	return 0;
}
