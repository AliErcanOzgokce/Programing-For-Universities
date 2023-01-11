#include <iostream>
using namespace std;

template<typename Type>
void insertion(Type * const array, int n){
	for(int i = 1; i<n ;i++){
		Type tmp = array[i];
		for(int j = i; j>0; j--){
			if(array[j-1]>tmp){
				array[j] = array[j-1];
			}else{
				array[j] = tmp;
				break;
			}
		}
		
		if(array[0] > tmp){
			array[0] = tmp;
		}
	}
}
