#include <stdio.h>
#include <stdlib.h>

void printIntArray(int* arr, size_t size) {
    for(int i = 0; i < size; i++) {
        arr[i] = i + 4;
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int main() {
    int* arr = (int*)malloc(sizeof(int) * 10);
    printIntArray(arr, 10);
    free(arr);
}