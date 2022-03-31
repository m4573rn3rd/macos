#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "good";
  string happy = "bad";
  string &meal = food;

  cout << food << "\n";
  cout << happy << "\n";
  cout << meal << "\n";
  return 0;
}
