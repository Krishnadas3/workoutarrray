#include <stdio.h>

int main() {
    int arr[100];
    int i, sum = 0, missing_num;

    // Initialize the array with numbers 1 to 100
    for (i = 0; i < 100; i++) {
        arr[i] = i+1;
        sum += arr[i];
    }

    // Replace one number with 0 to simulate a missing number
    int index = 47; // Example index of missing number
    arr[index] = 0;

    // Find the missing number
    missing_num = (100*(100+1)/2) - sum;

    printf("The missing number is: %d\n", missing_num);
    return 0;
}
