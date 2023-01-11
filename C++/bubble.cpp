#include <iostream>
using namespace std;

template <typename Type>
void bubble_sort(Type * const array, int n){
	for(int i = n-1; i>0; i--){
		for(int j = 0; j<i; j++){
			if(array[j]>array[j+1]){
				swap(array[j], array[j+1]);
			}
		}
	}
}
