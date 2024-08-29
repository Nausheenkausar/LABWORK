#include <stdio.h>

int main() {
    int n, i, sum = 0, max, min;
    float average;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element of the array
    max = arr[0];
    min = arr[0];

    // Calculate sum, and find max and min
    for(i = 0; i < n; i++) {
        sum += arr[i];  // Adding each element to sum

        if(arr[i] > max) {
            max = arr[i];  // Update max if current element is greater
        }
        if(arr[i] < min) {
            min = arr[i];  // Update min if current element is smaller
        }
    }

    // Calculate average
    average = (float)sum / n;

    // Display the results
    printf("Sum of elements: %d\n", sum);
    printf("Average of elements: %.2f\n", average);
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}

