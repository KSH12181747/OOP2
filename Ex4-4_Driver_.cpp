#include <iostream>
using std::cout;
using std::endl;

#include "Ex4-4.h"

int main() {
	GradeBook gradeBook1("cs101 introduction to C++ Programming");
	GradeBook gradeBook2("cs102 Data Structures in C++");

	cout << "gradeBook1 creates for course: " << gradeBook1.getCourseName()
	<< "\ngradeBook2 creates for course: " << gradeBook2.getCourseName()
	<< endl;
	
	return 0;
}