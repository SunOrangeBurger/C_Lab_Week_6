#include <stdio.h>

int sumEven(int arr[], int size);

int main() {
    int arr[100], size, i;
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    for (i = 0; i < size; i++) {
        printf("Enter array element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Sum of even numbers: %d", sumEven(arr, size));
    return 0;
}
int sumEven(int arr[], int size) {
    int sum = 0, i;
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}
