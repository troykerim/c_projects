#include <stdio.h>
// Function to perform bubble sort on an array
void bubble_sort(int *x, int n) {
    int i, t, j = n, s = 1;
    // Outer loop controls the number of passes
    while (s) {
        s = 0; // Initialize swap indicator
        // Inner loop performs pairwise comparisons and swaps
        for (i = 1; i < j; i++) {
            if (x[i] < x[i - 1]) {
                // Swap elements if they are in the wrong order
                t = x[i];
                x[i] = x[i - 1];
                x[i - 1] = t;
                s = 1; // Set swap indicator to 1
            }
        }
        j--; // Reduce the size of the array to ignore the sorted elements
    }
}
// Main function
int main() {
    int x[] = {15, 56, 12, -21, 1, 659, 3, 83, 51, 3, 135, 0};
    int n = sizeof x / sizeof x[0];
    int i;
    // Print the original array
    for (i = 0; i < n; i++)
        printf("%d%s", x[i], i == n - 1 ? "\n" : " ");
    // Perform bubble sort
    bubble_sort(x, n);
    // Print the sorted array
    for (i = 0; i < n; i++)
        printf("%d%s", x[i], i == n - 1 ? "\n" : " ");
    return 0;
}