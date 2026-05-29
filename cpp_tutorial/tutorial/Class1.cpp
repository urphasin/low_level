#include <iostream>

using namespace std;

class Entity {
    public:
        float X, Y;

        void Move(float xa, float ya) {
            X += xa;
            Y += ya;
        }

};

class Player : Entity{};


int main() {
    std::cout << sizeof(new Player()) << " bytes" << std::endl;    
}