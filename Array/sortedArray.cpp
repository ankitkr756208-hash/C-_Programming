#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 5, 9};
    int arr2[] = {2, 3, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int merged[n1 + n2];
    int i = 0, j = 0, k = 0;

    // Merge arrays in ascending order
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    // Copy remaining elements
    while (i < n1) merged[k++] = arr1[i++];
    while (j < n2) merged[k++] = arr2[j++];

    // Print merged array
    cout << "Merged Array in Ascending Order: ";
    for (int x = 0; x < n1 + n2; x++) {
        cout << merged[x] << " ";
    }

    return 0;
}

    
