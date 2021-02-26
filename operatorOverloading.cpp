#include <iostream>
using namespace std;

class matrix{
public:
  int m;
  int n;
  int mat[10][10];
  matrix(){
    m=2;
    n=2;
  }
  matrix operator+(matrix m1){
    for(int i=0;i<m1.m;i++){
      for(int j=0;j<m1.n;j++){
       m1.mat[i][j]+=mat[i][j];
      }
    }
    return m1;
  }
  friend ostream& operator<<(ostream&,matrix&);
  friend istream& operator>>(istream&,matrix&);
};

 ostream & operator <<(ostream& os,matrix& m1){
  cout<<"Elements of matrix are :"<<endl;
  for(int i=0;i<m1.m;i++){
    for(int j=0;j<m1.n;j++){
      os<<m1.mat[i][j];
      cout<<endl;
    }
  }
  return os;
}

 istream & operator >> (istream& is,matrix& m1){
  cout<<"Enter elements of matrix :"<<endl;
  for(int i=0;i<m1.m;i++){
    for(int j=0;j<m1.n;j++){
      is>>m1.mat[i][j];
    }
  }
  cout<<"Elements entered";
  return is;
}


int main(){
  matrix m1,m2,m3;
  cin>>m1;
  cin>>m2;
  m3=m1+m2;
  cout<<m3;
  return 0;
}
