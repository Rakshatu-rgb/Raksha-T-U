#include <stdio.h>

int main() {
    int n, i, j, maxCount = 0, mostFreq;

    printf("Enter number of ratings: ");
    scanf("%d", &n);

    int ratings[n];
    printf("Enter product ratings: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &ratings[i]);
    }

    // Find the most frequent rating
    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (ratings[j] == ratings[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostFreq = ratings[i];
        }
    }

    printf("Most frequent rating: %d\n", mostFreq);
    return 0;
}
