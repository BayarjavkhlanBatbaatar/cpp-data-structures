#include <iostream>
#include "array.h"

using namespace std;

int main(){
	ARRAY my_arr(15);
	cout << "array size: " << my_arr.get_size() << endl;
	my_arr.print_arr();
	cout << "access with operator: " << my_arr[5] << endl;
	cout << "front of the array: " << my_arr.front() << endl;
	cout << "back of the array: " << my_arr.back() << endl;

	ARRAY::MyIterator iter(&my_arr);
	iter++;

	ARRAY::MyIterator iter1(&my_arr);
	iter1++;
	// iter1++;

	if(iter1 == iter){
		cout << "yes same iter." << endl;
	}
	else{
		cout << "nope" << endl;
	}
	cout <<  *iter << endl;
}
