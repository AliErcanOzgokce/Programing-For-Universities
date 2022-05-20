#include<iostream>
#include<vector>
using namespace std;
void PrintVector(vector<char> a) {
int i;
for (i=0;i<a.size();i++) {
 cout << a[i] << " ";
}
cout<<endl;
}
int main(){
 vector<char> v(3,'k'); int i;char ch='R';
 PrintVector(v);
 v.push_back(ch++);
 v.push_back(ch++);
 PrintVector(v);
 v.erase(v.begin()+1,v.end()-2);
 PrintVector(v);
  if(!v.empty()) v.insert(v.begin()+2,2,ch);
    PrintVector(v);
 return 0;
}
