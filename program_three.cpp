#include <iostream>

using std::cout;
using std::endl;

class GradeBook
{
public:

  void displayMessage()
  {
    cout << "Welcome to GradeBook!" << endl;
  }
};

int main()
{
  GradeBook gradebook;
  gradebook.displayMessage();
}
