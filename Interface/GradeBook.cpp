#include <iostream>

using std::cout;
using std::endl;

#include <string>

using std::string;

#include "GradeBook.h"

GradeBook::GradeBook( string name )
{
  setCourseName(name);
}

void GradeBook::setCourseName ( string name )
{
  courseName = name;
}

string GradeBook::getCourseName()
{
  return courseName;
}

void GradeBook::displayMessage()
{
  cout << "Welcome to grade book for: " << getCourseName() << endl;
}
