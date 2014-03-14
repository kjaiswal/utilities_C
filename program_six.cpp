#include <iostream>

using std::cout;
using std::endl;

#include <string>
using std::string;
using std::getline;

class GradeBook
{
private:
  string courseName; 

public:

  GradeBook(string name)
  {
    setCourseName(name);
  }

  void setCourseName(string name)
  {
    courseName = name;
  }

  string getCourseName()
  {
    return courseName;
  }

  void displayMessage()
  {
    cout << "Welcome to course: " << courseName << endl;
  }

};

int main()
{
  GradeBook gradebook1("CS101: Introduction to C++"); 
  GradeBook gradebook2("CS102: Introduction to data stuctures with C++");

  gradebook1.displayMessage();
  gradebook2.displayMessage();
}
