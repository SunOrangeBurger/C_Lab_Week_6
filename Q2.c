#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int arr[100], size, i, idx1, idx2;
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    for (i = 0; i < size; i++) {
        printf("Enter array element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter indices to swap: ");
    scanf("%d %d", &idx1, &idx2);
    swap(&arr[idx1], &arr[idx2]);
    printf("Array after swap: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
