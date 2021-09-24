#include <iostream>
using std::cout;
using std::endl;

#include "Ex5_1_Time.h"

int main() {
	Time t;

	cout << "The initial universal time is ";
	t.printuniversal();
	cout << "\nThe initail standard time is ";
	t.printStandard();

	t.setTime(13, 27, 6);
	cout << "\n\nUniversal time after setTime is ";
	t.printuniversal();
	cout << "\nStandard time after setTime is ";
	t.printStandard();

	t.setTime(99, 99, 99);

	cout << "\n\nAfter attempting invalid settings:"
		<< "\nUniversal time: ";
	t.printuniversal();
	cout << "\nStandard time: ";
	t.printStandard();
	cout << endl;
	return 0;
}