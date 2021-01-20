//check whether the number id even or odd

#include <iostream>
using namespace std;

int main(){
  char c='y';
  while(c=='y'){

  int a;
  cout<<"Enter a Number : ";
  cin>>a;
  if (a%2==0) {
  cout<<"\nIts an Even Number";
  } else {
    cout<<"\nIts an odd Number";
  }
  cout<<"\ncontinue ? :";
  cin>>c;
}
  return 0;
}
