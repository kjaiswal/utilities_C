#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <string>

using std::string;
using std::getline;

class GradeBook
{
private:
  string courseName;

public:

  void setCourseName(string name){
    courseName = name;
  }

  string getCourseName(){
    return courseName;
  }

  void displayCourseName(){
    cout << "Welcome to course: " << getCourseName() << "!"<< endl;
  }
};

int main(){

  string course_name;
  GradeBook gradebook;

  cout << "Initial course name: " << gradebook.getCourseName() << endl;

  cout << "Enter the course name: \n";
  getline(cin, course_name);
  gradebook.setCourseName(course_name);

  gradebook.displayCourseName();

}
