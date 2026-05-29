#include <iostream>
#include <set>

void funcA() {
    // Make set A
    std::set<int> A{10, 20, 30, 34, 40, 100};
    A.insert("54");

    // Print set A
    std::set<int>::iterator it = A.begin();
    for( ; it != A.end(); it++ ) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;
}

void funcB() {
    // Make set B
    std::set< int, std::greater<int> > B{10, 20, 30, 34, 40, 100};
    
    // Print set B
    std::set<int>::iterator it = B.begin();
    for( ; it != B.end(); it++ ) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;
}

int main() {

    funcA();
    funcB();

    std::cout << "\n";
    std::cout << std::endl;
}