#include <stdio.h>

int main() {
    int n, i, maxSales, day;

    printf("Enter number of days: ");
    scanf("%d", &n);

    int sales[n];
    printf("Enter sales for each day: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &sales[i]);
    }

    // Find the highest sales day
    maxSales = sales[0];
    day = 0;
    for (i = 1; i < n; i++) {
        if (sales[i] > maxSales) {
            maxSales = sales[i];
            day = i;
        }
    }

    printf("Highest sales on day %d: %d\n", day + 1, maxSales);
    return 0;
}
