#include <iostream>
#include <string>

using namespace std;

int main()
{
  char x;

  cout << sizeof(x);

  cout << "the text: ";

  string name;
  getline(cin, name);

  printf("the text is: %s\n", name.c_str());
}
