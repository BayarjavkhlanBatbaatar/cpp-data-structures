#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> vec;
	for(int i=1; i<20; i++){
		vec.push_back(i);
	}
	cout << "size of the vector: " << vec.size() << endl;

	vector<int>::iterator it = vec.begin();
	cout << "iterator begin: " << *it << endl;
	cout << "iterator begin+1: " << *(it+1) << endl;
}
