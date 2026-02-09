#include <stdio.h>

// Insert element x at index i
void insert(int a[], int *n, int i, int x) {
    if (i < 0 || i > *n) {
        printf("Invalid index for insertion!\n");
        return;
    }
    for (int j = *n - 1; j >= i; j--) {
        a[j + 1] = a[j];
    }
    a[i] = x;
    (*n)++;
}

// Delete element at index i
int delete(int a[], int *n, int i) {
    if (i < 0 || i >= *n) {
        printf("Invalid index for deletion!\n");
        return -1;  // error value
    }
    int x = a[i];
    for (int j = i; j < *n - 1; j++) {
        a[j] = a[j + 1];
    }
    (*n)--;
    return x;
}

// Print the array
void printArray(int a[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void orderedInsertion(int a[],int *n,int x){
    int i=0;
    while(i<*n && a[i]<x){
        i++;
        arrayInsertion(a,n,i,x);
    }
}

int main() {
    int a[20] = {3, 6, 9, 12, 15}; // extra capacity
    int n = 5;

    printArray(a, n);

    insert(a, &n, 2, 100);
    printArray(a, n);
    orderedInsertion(a,&n,56);

    int deleted = delete(a, &n, 1);
    if (deleted != -1) {
        printf("Deleted element: %d\n", deleted);
    }
    printArray(a, n);

    return 0;
}
