#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


template<typename T>
void printVector(std::vector<T> v) {
    std::cout << "\nFor the data: [ ";
    for (auto i : v) {
        std::cout << i << ", ";
    }
    std::cout << "]\n";
}

double Mean(const std::vector<double>& arr) {
    int sum = 0;
    for (size_t i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    int n = static_cast<int>(arr.size());
    return static_cast<double>(sum) / n;
}

double Median(const std::vector<double>& arr) {
    std::vector<double> copy = arr;
    std::sort(copy.begin(), copy.end());
    
    int n = static_cast<int>(copy.size());
    if (n % 2 == 0) {
        return (copy[n/2 - 1] + copy[n/2]) / 2;
    } else {
        return copy[ceil(n/2)];
    }
}   

std::string IQR(const std::vector<double>& arr) {
    double median = Median(arr);
    int posMedian1index = 0;
    double Q1;
    double Q3;
    
    std::vector<double> copy = arr;
    std::sort(copy.begin(), copy.end());
    
    int n = static_cast<int>(copy.size());
    if (n % 2 != 0) {
        posMedian1index = ceil(n/2);
        
        Q1 = Median(std::vector<double>(copy.begin(), copy.begin() + posMedian1index));
        Q3 = Median(std::vector<double>(copy.begin() + posMedian1index + 1, copy.end()));
    } else {
        int start = 0;
        for(int i = 0; i < copy.size(); i++) {
            if (copy[i] >= median) {
                start = i - 1;
                break;
            }
        }
        Q1 = Median(std::vector<double>(copy.begin(), copy.begin() + start + 1));
        Q3 = Median(std::vector<double>(copy.begin() + start, copy.end()));
    }
    
    return std::to_string(Q1) + " to " + std::to_string(Q3);
}


double calcVariance(const std::vector<double>&);

double calcVariance(const std::vector<double>& arr) {
    int n = static_cast<int>(arr.size());
    double mean = Mean(arr);

    double runningExponentialSum = 0; 

    for(size_t i = 0; i < arr.size(); i++) {
        runningExponentialSum += pow((arr[i] - mean), 2);
    }

    return runningExponentialSum / (n - 1);
}

double calcStd(const std::vector<double>& arr) {
    return sqrt(calcVariance(arr));
}



int main() {

    int* p;
    std::string s = "hallelujah children * 23 stars dsd. ikd idhnsind sdijd sihdsid sdsdshallelujah children * 23 stars dsd. ikd idhnsind sdijd sihdsid sdsdshallelujah children * 23 stars dsd. ikd idhnsind sdijd sihdsid sdsdshallelujah children * 23 stars dsd. ikd idhnsind sdijd sihdsid sdsds";
    std::cout << sizeof(p) << "bytes" <<
    "\nString Object: " << sizeof(s) << "bytes" <<
    " \nstring-s: " << s.size() << "bytes" << 
    std::endl;

    std::vector<double> arr {0, 10, 50, 60, 100};
    printVector(arr);
    std::cout << 
    "\nMedian: " << Median(arr) <<
    "\nIQR: " << IQR(arr) <<
    "\nMean: " << Mean(arr) <<
    "\nStandard Deviation: " << calcStd(arr) << std::endl;
    

    arr = {0, 100, 500, 600, 1000};
    printVector(arr);
    std::cout << 
    "\nMedian: " << Median(arr) <<
    "\nIQR: " << IQR(arr) <<
    "\nMean: " << Mean(arr) <<
    "\nStandard Deviation: " << calcStd(arr) << std::endl;
    
    return 0;
}