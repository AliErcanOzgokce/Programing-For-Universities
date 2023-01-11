#include <iostream>
using namespace std;

template <typename Type>
void insertion_sort(Type * const array, int n){
	for(int i = 1; i<n;i++){
		for(int j = i; j>0;j--){
			if(array[j-1]>array[j]){
				swap(array[j-1],array[j]);				
			}else{
				break;
			}
		}
	}
}
