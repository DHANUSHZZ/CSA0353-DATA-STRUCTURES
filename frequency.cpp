#include <stdio.h>

int main()
{
    int arr[100], freq[100];
    int n, i, j, count;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Read the elements of the array from the user
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    // Find frequency of each element
    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }

        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    // Print the frequency of each element
    printf("\nFrequency of each element in the array:\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}

