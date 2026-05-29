#include <iostream>
#include <cmath>
#include <string>
using namespace std;

std::ostream& operator<<(std::ostream& os, unsigned __int128 x);

int main() {
    /*
    unsigned __int128 is a compiler extension (mainly GCC/Clang), 
    not a standard C++ integer type, 
    so the standard stream operators (<<) were never overloaded for it.
    */
    unsigned __int128 x = 4;

    std::cout << x << std::endl;

    return 0;
}