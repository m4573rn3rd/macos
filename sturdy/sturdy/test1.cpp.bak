#include <iostream>
#include<unistd.h> 
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
  std::cout << "hello" << std::endl;
  chdir("/tmp");
  system("ls");
  chdir("~/Scripts/c_linux");
  system("date");
  std::system("ls -l &gt;output.txt");
    ofstream myfile ("run.log");
  if (myfile.is_open())
  {
    myfile << "This works.\n";
    myfile << "So does this.\n";
    myfile.close();
  }
  else cout << "Unable to open file";
  return 0; 
}
