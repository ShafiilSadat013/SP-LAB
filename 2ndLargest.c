#include <stdio.h>
int main() {
    int i, n;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int firsthighest = arr[0];
    int secondhighest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > firsthighest) {
            secondhighest = firsthighest;
            firsthighest = arr[i];
        } else if (arr[i] > secondhighest && arr[i] != firsthighest) {
            secondhighest = arr[i];
        }
    }

    printf("Second largest: %d\n", secondhighest);

    return 0;
}
