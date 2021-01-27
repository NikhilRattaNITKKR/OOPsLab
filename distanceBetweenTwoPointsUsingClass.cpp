#include <iostream>
#include <cmath>
using namespace std;

class point{
private:
  int x;
  int y;
public:
  void getPoint();
  void calculateDistance(point p2);
};
void point::getPoint(){
  cout<<"Enter X cordinate : ";
  cin>>x;
  cout<<"\n Enter Y cordinate : ";
  cin>>y;
}
void point::calculateDistance(point p2){
  float distance=sqrt(pow(x-p2.x,2)+pow(y-p2.y,2));

  cout<<"\nThe Distance between ("<<x<<","<<y<<") and ("<<p2.x<<","<<p2.y<<") is : "<<distance;

}


int main(){
  point p1,p2;
  p1.getPoint();
  p2.getPoint();
  p1.calculateDistance(p2);
  return 0;
}
