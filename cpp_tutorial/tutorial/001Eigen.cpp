#include <iostream>
#include <cmath>
#include <string>
#include <Eigen/Dense>
using namespace std;




int main() {

    Eigen::Matrix2d matrix;
    matrix <<   1, 2,
                3, 4;
    
    std::cout << matrix << std::endl;

    return 0;
}