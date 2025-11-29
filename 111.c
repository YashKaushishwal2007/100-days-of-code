#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the subarray size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 0;
    }

    printf("Maximum elements in each subarray of size %d: ", k);

    for (int i = 0; i <= n - k; i++) {
        int maxVal = arr[i];
        for (int j = i; j < i + k; j++) {
            if (arr[j] > maxVal)
                maxVal = arr[j];
        }
        printf("%d ", maxVal);
    }

    printf("\n");
    return 0;
}
