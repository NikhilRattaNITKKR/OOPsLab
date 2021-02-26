#include <iostream>
using namespace std;

class A{
public:
  int a;
  void show(){
    cout<<a<<endl;
  }
};



int main(){
 A a ,*b;
 int A::* ptr=&A::a;
 a.*ptr=10;
 void (A::*ptrf)()=&A::show;

 cout<<a.*ptr<<endl;

  (a.*ptrf)();

 b=&a;
 b->*ptr=100;



 cout<<b->*ptr<<endl;

 (b->*ptrf)();

  return 0;
}
