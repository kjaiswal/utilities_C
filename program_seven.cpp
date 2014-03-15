#include <iostream>

using std::cout;
using std::endl;

#include "GradeBook.h"

int main(){

  GradeBook gradebook1("CS101 Introduction to C++");
  GradeBook gradebook2("CS102 Introduction to Datastructures");

  gradebook1.displayMessage();
  gradebook2.displayMessage();
}
