#include<iostream>
using namespace std;
int main(){
int A[10][10]={{1,4,3},{3,8,5},{5,6,9}};
int i,j,N=3,t;
for (i=0;i<N;i++){
 t=A[i][i];
 A[i][i]=A[i][N-i-1];
 A[i][N-i-1]=t;
}
for (i=0;i<N;i++){
 for (j=0;j<N;j++)
 cout<< A[i][j]<<" ";
 cout<<"\n";
}
return 0;
}
