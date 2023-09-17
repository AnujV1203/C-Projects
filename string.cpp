//strlen()-It returns the length of the string supplied as argument
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char name[100]; // Choose a reasonable buffer size
    cout << "Enter name: ";
    cin.getline(name, sizeof(name)); // Use cin.getline for safe input

    int l = strlen(name);
    cout << "Length of the name is: " << l << endl;

    return 0;
}
