//display the  first n terms of Fibbonacci Series

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the number of Terms: ";
  cin>>n;
  cout<<"\n The Terms Are : \n";

  int first=0;
  int second=1;
  int third;
  cout<<first<<endl<<second<<endl;
  for (int i = 0; i <n-2; i++) {
    third=first+second;
    first=second;
    second=third;
    cout<<third<<endl;
  }
  return 0;
}
