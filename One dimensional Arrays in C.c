#include <stdio.h>

int main() {
    int n, i;
    int arr[100];   // array with max size 100
    int sum = 0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nYou entered:\n");
    for(i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
        sum += arr[i];   // accumulate sum
    }

    avg = (float)sum / n;

    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
