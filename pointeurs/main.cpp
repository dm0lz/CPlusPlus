#include <iostream>
using namespace std;

int main (int argc, char * const argv[]) {
	
	int age=11;
	int *ptr=0;
	
	ptr=&age;
	
	cout << ptr <<endl;
	cout << &ptr <<endl;
	cout << *ptr;
}
