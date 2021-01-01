#include <iostream>
#include <libextra/extra.hxx>
#include <libhello/hello.hxx>

int main (int argc, char* argv[])
{
  using namespace std;

  if (argc < 2)
  {
    cerr << "error: missing name" << endl;
    return 1;
  }

  extra::say_hello(cout, "Extra");
  hello::say_hello(cout, argv[1]);
  // cout << "Hello, " << argv[1] << '!' << endl;
}
