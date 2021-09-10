#include <iostream>
using std::cout;	//출력 담당
using std::cin;		//입력 담당
using std::endl;	//new lind "\n"

#include <string> //program uses C++ strand string class
using std::string;
using std::getline;

// GradeBook class definition
class GradeBook {
public:
	//function that display a welcome message to the GradeBook user
	void displayMessage(string courseName) {
		cout << "Welcome to the grad book for " << courseName << "!" << endl;
	} // end function displayMessage
}; // end class GradeBook;

// function main begins program execution
int main() {
	string nameOfCourse; // string of characters to stire the course name
	GradeBook myGradeBook; // create a GradeBook object named myGradeBook

	//Prompt for and input course name
	cout << "Please enter the course name : " << endl;
	getline(cin, nameOfCourse); // read a course name with blanks
	cout << endl; // output a blank line

	// call myGradeBook's displayMessage function
	// and pass nameOfCourse as an argument
	myGradeBook.displayMessage(nameOfCourse);
	return 0;
} // end main