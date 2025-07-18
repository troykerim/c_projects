#include <stdio.h>
#include <stdlib.h>

// Function to perform CycleSort on an array in place and return the number of writes.
int cycleSort(int *list, size_t l_len);

// Function to display the elements of an array
void show_array(int *array, size_t a_len);

// Implementation of CycleSort algorithm
int cycleSort(int *list, size_t l_len) {
    int cycleStart, writes = 0;

    // Loop through the array to find cycles to rotate
    for (cycleStart = 0; cycleStart < l_len - 1; ++cycleStart) {
        int item = list[cycleStart];
        int swap_tmp, i;

        // Find where to put the item
        int pos = cycleStart;
        for (i = cycleStart + 1; i < l_len; ++i) {
            if (list[i] < item) {
                ++pos;
            }
        }

        // If the item is already there, this is not a cycle
        if (pos == cycleStart) {
            continue;
        }

        // Otherwise, put the item there or right after any duplicates
        while (item == list[pos]) {
            ++pos;
        }
        swap_tmp = list[pos];
        list[pos] = item;
        item = swap_tmp;
        ++writes;

        // Rotate the rest of the cycle
        while (pos != cycleStart) {
            // Find where to put the item
            pos = cycleStart;
            for (i = cycleStart + 1; i < l_len; ++i) {
                if (list[i] < item) {
                    ++pos;
                }
            }

            // Put the item there or right after any duplicates
            while (item == list[pos]) {
                ++pos;
            }
            swap_tmp = list[pos];
            list[pos] = item;
            item = swap_tmp;
            ++writes;
        }
    }

    return writes;
}

// Main function
int main(int argc, char **argv) {
    int arr[] = {0, 1, 2, 2, 2, 2, 1, 9, 3, 5, 5, 8, 4, 7, 0, 6};
    int arr_k = sizeof(arr) / sizeof(arr[0]);
    int writes, i;

    // Display original array
    printf("Original Array:\n");
    show_array(arr, arr_k);

    // Sort the array using CycleSort
    writes = cycleSort(arr, arr_k);

    // Display sorted array and number of writes
    printf("\nSorted Array:\n");
    show_array(arr, arr_k);
    printf("writes: %d\n", writes);

    return 0;
}

// Function to display the elements of an array
void show_array(int *array, size_t a_len) {
    int ix;
    for (ix = 0; ix < a_len; ++ix) {
        printf("%d ", array[ix]);
    }
    putchar('\n');

    return;
}