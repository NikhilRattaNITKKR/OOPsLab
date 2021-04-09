#include <iostream>
using namespace std;


class subject{
public:
  int n;
  int *marks;
  subject(){
    cout<<"\n Enter number of subjects :";
    cin>>n;
    marks=new int[n];
    cout<<"\n Enter marks \n";
    for(int i=0;i<n;i++){
      cin>>marks[i];
    }
  }
};
class student: public subject{
public:
  int rollNo;
  string name;

  student():subject(){
cout<<"\nEnter name : ";
cin>>name;
  }
};
class result:public student{
public:
  float res;
  result():student(){
    res=0;
  }
  void calculate(){

    for(int i=0;i<n;i++){
      res+=marks[i];
    }
    res/=n;
  }
  void displayResult(){
    cout<<"\nThe result is "<<res;
  }
};

int  main(){
 result r;
 r.calculate();
 r.displayResult();
  return 0;
}
