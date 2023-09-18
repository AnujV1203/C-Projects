//strcpy(#-It copy one string to another
#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char src[] = "Hello Programmers.";
    
  // large enough to store content of src
  char dest[20];

  // copy the contents of src to dest    
  strcpy(dest,src);
  
  cout << dest;

  return 0;
}