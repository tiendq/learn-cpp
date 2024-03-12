#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main() {
  cout << "Hello world!" << endl;

  string name = "Tien";
  auto p = make_pair(10, 5.5);

  cout << "first is " << p.first << " and second is " << p.second;

  cout << name << " length is " << name.length() << endl;
  return 0;
}
