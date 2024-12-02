#include <stdio.h>
#include <stdlib.h> // For malloc and free

// Function to check if there is a subset with a given sum
int issubsetsum(int arr[], int n, int sum) {
    // Create a 2D array to store results of subproblems
    int subset[n + 1][sum + 1];

    // Initialize the first column: a sum of 0 is always possible (using the empty subset)
    for (int i = 0; i <= n; i++)
        subset[i][0] = 1; // true

    // Initialize the first row: if there are no elements, no positive sum can be formed
    for (int i = 1; i <= sum; i++)
        subset[0][i] = 0; // false

    // Fill the subset table using dynamic programming
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (j < arr[i - 1]) {
                subset[i][j] = subset[i - 1][j]; // Can't include the element
            } else {
                subset[i][j] = subset[i - 1][j] || subset[i - 1][j - arr[i - 1]]; // Include or exclude
            }
        }
    }

    return subset[n][sum]; // Return whether the sum can be formed
}

// Main function
int main() {
    int n, sum;

    // Take input for the number of elements
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);

    // Allocate memory for the array
    int *set = (int *)malloc(n * sizeof(int));
    if (set == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    // Take input for the elements of the set
    printf("Enter the elements of the set:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &set[i]);
    }

    // Take input for the target sum
    printf("Enter the target sum: ");
    scanf("%d", &sum);

    // Check if a subset with the desired sum exists
    if (issubsetsum(set, n, sum))
        printf("found\n"); // Output if a subset is found
    else
        printf("notfound\n"); // Output if no subset is found

    // Free the allocated memory
    free(set);

    return 0; // Indicate successful execution
}
