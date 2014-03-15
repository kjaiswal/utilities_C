#include <iostream>
using std::cout;
using std::cin;

#include "GradeBook.h"

int main()
{

  GradeBook gradebook1("CS 101: Introduction to C++");
  GradeBook gradebook2("CS 102: Introduction to Data Structures");

  gradebook1.displayMessage();
  gradebook2.displayMessage();
}
