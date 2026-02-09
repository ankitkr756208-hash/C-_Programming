#include <iostream>
#include <vector>
using namespace std;

// Partition function
int partition(vector<int>& arr, int st, int end) {
    int pivot = arr[end];
    int idx = st - 1;

    for (int i = st; i < end; i++) {
        if (arr[i] <= pivot) {
            idx++;
            swap(arr[i], arr[idx]);
        }
    }
    swap(arr[idx + 1], arr[end]);
    return idx + 1;
}

// Quick sort function
void quicksort(vector<int>& arr, int st, int end) {
    if (st < end) {
        int pividx = partition(arr, st, end);
        quicksort(arr, st, pividx - 1);  // left half
        quicksort(arr, pividx + 1, end); // right half
    }
}

int main() {
    vector<int> arr = {12, 31, 35, 5, 67, 17};
    quicksort(arr, 0, arr.size() - 1);
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
