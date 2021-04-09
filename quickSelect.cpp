// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int *, int, int, int);

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];

        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];

        int k;
        cin>>k;
        cout<<kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}// } Driver Code Ends


//User function template for C++

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function

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
		while(arr[j]>pivot){j--;}
	  if(i<j){ swap(&arr[i],&arr[j]); }
	}
	swap(&arr[l],&arr[j]);
	return j;
}


int kthSmallest(int arr[], int l, int r, int k) {
int j;
 if(l<r){

 	j=partition(arr,l,r);

 	if(k==j){
 		return arr[k-1];
	 }else if(k<j){
	 	return kthSmallest(arr,l,j,k);
	 }else{
	 	return kthSmallest(arr,j+1,r,k);
	 }
 }
}
