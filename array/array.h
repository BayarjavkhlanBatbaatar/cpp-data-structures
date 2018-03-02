//array.h

#ifndef __ARRAY_H_INCLUDED__   // if array.h hasn't been included yet...
#define __ARRAY_H_INCLUDED__   //   #define this so the compiler knows it has been included


class ARRAY {
	public:
		ARRAY();
		ARRAY(int init_size);
		~ARRAY();

		int & operator[](int index);
		int & front();
		int & back();
		
		int get_size();
		void print_arr();
	private:
		int *arr;
		int size;

	public:
		class MyIterator : public std::iterator<std::input_iterator_tag, int>
			{
			  int* p;
			public:
			  MyIterator(int* x) :p(x) {}
			  MyIterator(const MyIterator& mit) : p(mit.p) {}
			  MyIterator& operator++() {++p;return *this;}
			  MyIterator operator++(int) {MyIterator tmp(*this); operator++(); return tmp;}
			  bool operator==(const MyIterator& rhs) const {return p==rhs.p;}
			  bool operator!=(const MyIterator& rhs) const {return p!=rhs.p;}
			  int& operator*() {return *p;}
			};
};

#endif