/// weakPtr.cpp

#include <iostream>
#include <memory>
using namespace std;
int main() {

	
	shared_ptr<int> sharedPtr = make_shared<int>(2011);
	weak_ptr<int> weakPtr(sharedPtr);

	cout << "weakPtr.use_count(): " << weakPtr.use_count() << endl;
	cout << "sharedPtr.use_count(): " << sharedPtr.use_count() << endl;
	cout << "weakPtr.expired(): " << weakPtr.expired() << endl;

	if (shared_ptr<int> sharedPtr1 = weakPtr.lock()) {
		cout << "*sharedPtr: " << *sharedPtr << endl;
		cout << "sharedPtr1.use_count(): " << sharedPtr1.use_count() << endl;
	}
	else {
		cout << "Don't get the resource!" << endl;
	}

	weakPtr.reset();
	if (shared_ptr<int> sharedPtr1 = weakPtr.lock()) {
		cout << "*sharedPtr: " << *sharedPtr << endl;
		cout << "sharedPtr1.use_count(): " << sharedPtr1.use_count() << endl;
	}
	else {
		cout << "Don't get the resource!" << endl;
	}

	cout << endl;

}
