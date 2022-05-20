#include<iostream>
using namespace std;
int f(int b);
int g(int c);
int x=5;
int main(){
  int a;
  a= f(g(x))/--x;
  cout<< x <<" "<< a << endl;
  return 0;
}
int f (int b) {
  return b*b;
}
int g (int c) {
  return x++ +c;
}
