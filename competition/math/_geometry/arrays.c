#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(0));
    
    int m = 7;
    int n = 20;
    int arr[m][n];

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            arr[i][j] = rand() % 2;
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}