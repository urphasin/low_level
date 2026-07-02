#include <stdio.h>

long long nPr(int n, int r) {
    if (r > n || r < 0 || n < 0) {
        return 0;
    }

    long long result = 1;

    for (int i = 0; i < r; i++) {
        result = result * (n - i);
    }

    return result;
}

int main() {

    int n = 10, r = 3;
    printf("nPr = %lld\n", nPr(n, r));
    
    
    return 0;
}