#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <set>
#include <unordered_set>
#include <limits>
#include <unordered_map>
#include <map>
#include <bit>
#include <bitset>

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