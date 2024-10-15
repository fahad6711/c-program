#include <stdio.h>

// Merge cheyyan function, purushan! Adipoli aayi!
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1; // Left array size kitti, oru nalla kaaryam!
    int n2 = r - m; // Right array size kitti, ithu nalla padam!

    // Create temporary arrays, purushan! Ithu nalla kaaryam!
    int L[n1], R[n2];

    // Copy data to temporary arrays, ithu avasanam!
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i]; // Left array
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j]; // Right array, neat aayi!

    // Merge the temporary arrays back into arr[l..r]
    i = 0; // Initial index of first sub-array
    j = 0; // Initial index of second sub-array
    k = l; // Initial index of merged sub-array
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i]; // Copy smaller element
            i++; // Increment left array index, purushan!
        } else {
            arr[k] = R[j]; // Copy smaller element
            j++; // Increment right array index
        }
        k++; // Move to next position, ada mone!
    }

    // Copy the remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort function, ithu nalla karyam! Enthu sadhyama!
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2; // Middle point kitti, ithu easy!

        // Sort first and second halves
        mergeSort(arr, l, m); // Left side, adikaaru!
        mergeSort(arr, m + 1, r); // Right side, super aayi!

        merge(arr, l, m, r); // Sorted halves merge cheyyu, mone!
    }
}

// Helper function to print the array, kanu mone!
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]); // Print cheyyu, da! Adipoli aayi!
    printf("\n"); // New line koduthal, adikaaru!
}

// Main function, ithil ella muthal thudangum!
int main() {
    int n;
    printf("Enter number of elements in the array: "); // User input vangiyal!
    scanf("%d", &n); // User input eduthal

    int arr[n]; // Array undakkam
    printf("Enter %d elements:\n", n); // User ninnu elements koodi input cheyyu
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Each element input cheyyu
    }

    mergeSort(arr, 0, n - 1); // Sort cheyyanam, purushan!
    printf("Sorted array: \n");
    printArray(arr, n); // Sorted array kanikkum, ada mone!
    return 0; // All the best, da!
}
