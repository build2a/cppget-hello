#include <iostream>
#include <libextra/extra.hxx>
#include <libhello/hello.hxx>

int main (int argc, char* argv[])
{
  using namespace std;

  extra::say_hello(cout, "extra!");

  if (argc < 2)
  {
    cerr << "error: missing name" << endl;
    return 1;
  }

  hello::say_hello(cout, argv[1]);
  // cout << "Hello, " << argv[1] << '!' << endl;
}
