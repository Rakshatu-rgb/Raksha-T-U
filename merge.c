#include <stdio.h>  // Include standard input-output library

int main() {
    // Declare and initialize first array with 3 elements
    int arr1[100] = {2, 4, 6};  
    int size1 = 3;  // Size of the first array

    // Declare and initialize second array with 4 elements
    int arr2[100] = {8, 10, 12, 14};  
    int size2 = 4;  // Size of the second array

    // Declare merged array to store combined elements of arr1 and arr2
    int merged[200];  // Allocate enough space to hold both arrays
    int mergedSize = size1 + size2;  // Total size of merged array

    // Copy elements from arr1 to merged array
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements from arr2 to merged array after arr1's elements
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    // Print the merged array
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", merged[i]);
    }

    return 0;  // Indicate successful program execution
}
