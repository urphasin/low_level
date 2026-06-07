#include <iostream>
// #include <random>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
// #include <tuple>
#include <stack>
#include <queue>
#include <deque>
// #include <list>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <map>
// #include <bit>
#include <bitset>
#include <limits>
#include <numeric>
#include <functional>
#include <utility>
#include <SFML/Graphics.hpp>
// #include <SFML/
using namespace std;

/*
POST SUBMISSION QUESTIONS:

1.  

*/



// PROTOTYPES
std::ostream& operator<<(std::ostream& os, unsigned __int128 x);


// CLASSES AND STRUCTURES




// MAIN
int main() {
    /*
    unsigned __int128 is a compiler extension (mainly GCC/Clang), 
    not a standard C++ integer type, 
    so the standard stream operators (<<) were never overloaded for it.
    */
    unsigned __int128 x = 4;
    std::cout << x << std::endl;





    
    
    return 0;
    // sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML Works!");

    // while (window.isOpen()) {

    //     while (const std::optional event = window.pollEvent()) {
    //         if (event->is<sf::Event::Closed>()) {
    //             window.close();
    //         }
    //     }

    //     window.clear(sf::Color::Black);
    //     window.display();
    // }
}


// DEFINITIONS
std::ostream& operator<<(std::ostream& os, unsigned __int128 x) {
    if (x == 0) {
        os << '0';
        return os;
    }

    std::string s;

    while (x > 0) {
        s += '0' + (x % 10);
        x /= 10;
    }

    std::reverse(s.begin(), s.end());

    os << s;
    return os;
}

































