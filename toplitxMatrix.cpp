#include <iostream>
using namespace std;

class toplitzMatrix{
  int n;
  int *A;
public:
  toplitzMatrix(int n){
    this->n=n;
    A=new int[2*n-1];
  }
  void create();
  int get(int i,int j);
  void set(int i,int j, int x);
  void display();
};
void toplitzMatrix::create(){
 int x;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin>>x;
       if(i==1){
        A[j-i]=x;
        cout<<"A["<<j-i<<"] is :"<<x<<endl;
      }else if(j==1){
        A[n-1+i-j]=x;
        cout<<"A["<<n-1+i-j<<"] is :"<<x<<endl;

      }
    }
  }
}
int toplitzMatrix::get(int i,int j){
  if(i<=j){
    return A[j-i];
  }else{
    return A[n-1+i-j];
  }
}
void toplitzMatrix::set(int i,int j,int x){
  if(i<=j){
     A[j-i]=x;
  }else{
   A[n-1+i-j]=x;
  }
}
void toplitzMatrix::display(){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i<=j){
      cout<<A[j-i]<<" ";
    }else{
      cout<<A[n-1+i-j]<<" ";
    }
    }
    cout<<endl;
  }
}

int main(){

toplitzMatrix t(3);
t.create();
t.display();
cout<<t.get(2,2)<<endl;
t.set(2,2,10);
t.display();

  return 0;
}
