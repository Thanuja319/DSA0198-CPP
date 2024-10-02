#include <iostream>
using namespace std;
int main() {
    char letter = 'A';  
    char* ptr = &letter;  
    cout << "Value of letter: " << letter << endl;
    cout << "Pointer pointing to value: " << *ptr << endl;  
    cout << "Address of letter (held by pointer): " << static_cast<void*>(ptr) << endl;  
    return 0;
}

