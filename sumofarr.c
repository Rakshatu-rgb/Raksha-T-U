#include <stdio.h>  // Include standard input-output library

int main() {
    int n, i;  
    int sum = 0; // Initialize sum to 0 to store the sum of array elements

    // Prompt user for the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);  // Read the number of elements from user input

    int arr[n]; // Declare an array with 'n' elements (Variable Length Array - VLA, available in C99 and later)

    // Prompt user to enter the array elements
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {  // Loop through each element
        scanf("%d", &arr[i]);  // Read array element from user
        sum += arr[i]; // Add each element to the sum as it is read
    }

    // Print the sum of the array elements
    printf("The sum of the array elements is: %d\n", sum);

    return 0;  // Indicate successful program execution
}
