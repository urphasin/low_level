#include <stdio.h>

void printIntArray(int* arr, size_t size) {
    for(int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int main() {
    int* arr = malloc(sizeof(int) * 10);
    printIntArray(arr, 10);
}