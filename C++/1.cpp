#include<iostream>
using namespace std;
void g(double x, double &y, int i, int &j){
 x = y;
 y = x;
 i = 2*i;
 j = 2*j;
}
int main(){
  double x = 10.0; double y = 20.0;
  int i = 30; int j = 40;
  g(x,y,i,j);
  cout << x << y << i << j << endl;
  x = 1.0; y = 2.0;
  i = 3; j = 4;
  g(y,x,j,i);
  cout << x << y << i << j << endl;
  return 0;
}
