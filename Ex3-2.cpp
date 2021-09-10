#include <iostream>
using std::cout;
using std::endl;
using std::string;

class GradeBook {
public:
	void displayMessage() {
		cout << "Welcome to the Grade Book!" << endl;
	}
	void displayMessage(string str) {
		cout << str << endl;
	}
};

int main() {
	GradeBook myGradeBook;
	myGradeBook.displayMessage();
	myGradeBook.displayMessage("Welcome");
	myGradeBook.displayMessage("Lc");
	myGradeBook.displayMessage("the");
	myGradeBook.displayMessage("GradeBook");
	return 0;
}