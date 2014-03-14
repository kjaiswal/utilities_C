#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <string>

using std::string;
using std::getline;

class GradeBook
{

public:

  void displayMessage(string message)
  {
    cout << "Welcome to grade book for:" << endl
         << message << "!" << endl;
  }

};

int main(){

  string courseName;
  GradeBook gradebook;

  cout << "Enter the course name: " << endl;
  getline(cin, courseName);
  
  gradebook.displayMessage(courseName);

}
