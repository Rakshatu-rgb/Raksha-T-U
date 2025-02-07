#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter the array elements :");
    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    int smax = -1; // Initialize smax to a value smaller than any possible input
    for (i = 0; i < n; i++) {
        if (a[i] != max) {
            if (smax == -1 || a[i] > smax) {
                smax = a[i];
            }
        }
    }

    printf("The maximum number is %d\n", max);

    if (smax != -1) {
        printf("The second maximum number is %d\n", smax);
    } else {
        printf("No second maximum number exists.\n"); // Handle the case where all elements are the same
    }

    return 0;
}