#include <stdio.h>

int main() {
    int n, i, j, unique;

    // Get the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display unique elements
    printf("Unique elements in the array: ");
    for (i = 0; i < n; i++) {
        unique = 1; // Assume element is unique

        // Check if the element appears more than once
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j] && i != j) {
                unique = 0; // Not unique
                break;
            }
        }

        // Print if it's unique
        if (unique) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
