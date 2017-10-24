#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::cout;
using std::vector;
using std::endl;

int main(int argc, char* argv[]) {
  string hello("hello");
  cout << hello.c_str() << endl;
  vector<int> v;
  for (int i = 0; i < 10; i++)
    v.push_back(i);
  for (auto& element: v)
    cout << element << " ";
  cout << endl;
  return 0;
}
