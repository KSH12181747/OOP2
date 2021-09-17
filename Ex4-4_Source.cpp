#include <iostream>
using std::cout;
using std::endl;

#include "Ex4-4_Header.h"

GradeBook::GradeBook(string name) {
	setCourseName(name);
}

void GradeBook::setCourseName(string name) {
	courseName = name;
}
string GradeBook::getCourseName() {
	return courseName;
}

void GradeBook::displayMessage() {
	cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
}