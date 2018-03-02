#include "array.h"
#include <iostream>

using namespace std;

ARRAY::ARRAY(){
	size = 10;
	arr = new int[size];
	for(int i=0; i<size; i++){
		arr[i] = i;
	}
}
ARRAY::ARRAY(int init_size){
	// cout << "custom constructor" << endl;
	// cout << init_size << endl;

	size = init_size;
	arr = new int[size];
	for(int i=0; i<size; i++){
		arr[i] = i;
	}
}
ARRAY::~ARRAY(){
	delete[] arr;
}
int ARRAY::get_size(){
	return size;
}
void ARRAY::print_arr(){
	for(int i=0; i<size; i++){
		cout << arr[i] << endl;
	}
}
int & ARRAY::operator[](int index){
	return arr[index];
}
int & ARRAY::front(){
	return *arr;
}
int & ARRAY::back(){
	return arr[size-1];
}