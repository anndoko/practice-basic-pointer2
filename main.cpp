#include <iostream>
using namespace std;

int main() {
    int a = 50;
    cout << "The value of 'a' is: " << a << endl;
    
    int *b;
    b = &a;
    *b = 100;
    cout << "Now, the value of 'a' becomes: " << a << endl;
    
    int **c;
    c = &b;
    **c = 200;
    cout << "By using pointer c, the value of 'a' becomes: " << a << endl;
    
    return 0;
}
