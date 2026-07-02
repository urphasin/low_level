#include <iostream>
using namespace std;

int addCrap(int a, int b) {
    return a + b;
}

int main() {
    int x = 7, y = 43, z = addCrap(x, y);
    cout << z << endl;
}