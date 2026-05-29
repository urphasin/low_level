#include <stdio.h>

long long nCr(int n, int r) {
    if (r > n || r < 0 || n < 0) {
        return 0;
    }


    long long result = 1;
    for (int i = 0, j = r; i < r; i++, j--) {
        result = (result / j) * (n - i);
    }

    return result;
}

int main() {

    int n = 10, r = 2;
    printf("nCr = %lld\n", nCr(n, r));


    return 0;
}