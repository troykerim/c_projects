/*
    C program to find the length of the longest 
    subarray having sum k using a nested loop
*/

#include <stdio.h>
int longestsubarray(int arr[], int n, int k)
{
    int res = 0;

    for (int i = 0; i < n; i++) {
        
        // Sum of subarray from i to j
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
          
            // If subarray sum is equal to k
            if (sum == k) {
              
                // Find subarray length and update result
                int sublen = j - i + 1;
                res = (res > sublen) ? res : sublen;
            }
        }
    }
    return res;
}

int main()
{
    int arr[] = {10, 5, 2, 7, 1, -10};
    int k = 15;
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%d\n", longestsubarray(arr, n, k));

    return 0;
}