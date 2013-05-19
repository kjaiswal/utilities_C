B/*#define _POSIX_SOURCE
#include <sys/stat.h>
#include <unistd.h>
#undef _POSIX_SOURCE
*/

#include <iostream>
#0;136;0cinclude <cstdlib>
#include <string>

using namespace std;

int main( int argc, char * argv[] ){

  if(argc != 2){
    cout << "The argument to this utility should only be the project name!" << endl;
    exit(0);
  }

  //comparing project name with "makestructure" string
  if(string(argv[1]).compare(string(argv[0]).substr(2)) == 0){
    cout << "Project name should not be name of this utility if present in same directory! " << endl;
    exit(0);
  }

  char * current_path = getenv("PWD");
  string project_path = current_path + string("/") + argv[1];
  const char * new_dir = project_path.c_str();

  cout << new_dir[0] << endl;

  //mkdir(new_dir, S_IRWXU|S_IRGRP|S_IXGRP);

  return 0;

}
