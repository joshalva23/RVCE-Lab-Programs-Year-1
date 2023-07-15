#include <stdio.h>

void print_array(int *arr, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void heap_permute(int *arr, int size, int n) {
    int i;
    if (size == 1) {
        print_array(arr, n);
        return;
    }

    for ( i = 0; i < size; i++) {
        heap_permute(arr, size - 1, n);
        if (size % 2 == 1) {
            int temp = arr[0];
            arr[0] = arr[size - 1];
            arr[size - 1] = temp;
        } else {
            int temp = arr[i];
            arr[i] = arr[size - 1];
            arr[size - 1] = temp;
        }
    }
}

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]),i;
    int arr[n];
    for ( i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    heap_permute(arr, n, n);
    return 0;
}





