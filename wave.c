#include <stdio.h>


void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


void wavesort(int arr[], int n) {
    for (int i = 1; i < n; i += 2) {
        if (arr[i] < arr[i - 1]) {
            swap(arr, i, i - 1);
        }
        if (i <= n - 2 && arr[i] > arr[i + 1]) {
            swap(arr, i, i + 1);
        }
    }
}

int main() {
    int arr[] = {1, 3, 4, 7, 5, 6, 2};
    int n = 7;

    wavesort(arr, n);


    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
