#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection Sort 
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  // assume current element is smallest
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // update index of smallest element
            }
        }
        // swap smallest element with current element
        // int temp = arr[i];
        // arr[i] = arr[minIndex];
        // arr[minIndex] = temp;

        swap(arr[i], arr[minIndex]);  // C++ built-in swap function
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
