#include <stdio.h>

// Function to swap elements, purushan! Aayi swap cheyyu!
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp; // Swap cheyyanam, ithu nalla kaaryam!
}

// Partition function for quicksort, ithu main pattiya karyam!
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Last element koodi pivot aayi tharum
    int i = (low - 1); // Smaller element index kitti, carefully!

    for (int j = low; j < high; j++) {
        // If current element is smaller than or equal to pivot, alle?
        if (arr[j] <= pivot) {
            i++; // Index ne increment cheyyu
            swap(&arr[i], &arr[j]); // Swap cheyyu, ithu oru nalla pani!
        }
    }
    swap(&arr[i + 1], &arr[high]); // Pivotine nalla sthalathil move cheyyu
    return (i + 1); // Pivot index return cheyyu
}

// Quick Sort function, ellam ready aayi thudangum!
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partitioning index kitti, ithu easy aayi!
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1); // Left side, ithu aadyam!
        quickSort(arr, pi + 1, high); // Right side, all the best!
    }
}

// Helper function to print the array, kanu mone!
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]); // Print cheyyu, nalla aayi!
    printf("\n"); // New line koduthal, adikaaru!
}

// Main function, ithil ella muthal thudangum!
int main() {
    int n;
    printf("Enter number of elements in the array: "); // User ninnu input vangiyal!
    scanf("%d", &n); // User input eduthal

    int arr[n]; // Array undakkam
    printf("Enter %d elements:\n", n); // User ninnu elements koodi input cheyyu
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Each element input cheyyu
    }

    quickSort(arr, 0, n - 1); // Sort cheyyanam, purushan!
    printf("Sorted array: \n");
    printArray(arr, n); // Sorted array kanikkum, ada mone!
    return 0; // All the best, da!
}
