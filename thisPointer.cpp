#include <iostream>
using namespace std;


class ptr{
private:
  int a;
public:
  int b;
  ptr(){
    a=1;
    b=2;
  }
  void showPtr(){
    cout<<this->a;
    cout<<this->b;
  }
};


int main(){

ptr P;
P.showPtr();
  return 0;
}
