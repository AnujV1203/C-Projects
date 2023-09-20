//strcmp
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str1[] = "Megadeth";
  char str2[] = "Metallica";

  // compare str1 and str2 lexicographically
  int result = strcmp(str1, str2);

  cout << result;

  return 0;
}