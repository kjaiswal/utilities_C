#include <iostream>

using std::cout;
using std::endl;

#include <string>

using std::string;

class GradeBook{

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
    cout << "Welcome to grade book for: " << getCourseName() << endl;
  }
};
