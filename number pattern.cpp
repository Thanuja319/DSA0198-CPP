#include <iostream>
using namespace std;
int main() {
    int count = 1;  
    int rows = 3;   
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << count << " ";  
            count++;  
        }
        cout << endl;  
    }
    return 0;
}

