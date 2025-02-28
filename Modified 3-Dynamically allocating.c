#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <initial_size>\n", argv[0]);
        return 1;
    }
    
    // Initialize with the user-specified size
    int capacity = atoi(argv[1]);
    int size = 0; // Current number of elements stored
    int *array = (int *)malloc(capacity * sizeof(int));
    
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    int num;
    printf("Enter numbers (non-integer to exit):\n");
    
    // Infinite loop to keep accepting numbers
    while (1) {
        // Check if we need to resize
        if (size >= capacity) {
            // Double the capacity
            capacity *= 2;
            int *temp = (int *)realloc(array, capacity * sizeof(int));
            
            // Check if reallocation succeeded
            if (temp == NULL) {
                printf("Memory reallocation failed\n");
                free(array);
                return 1;
            }
            
            array = temp;
            printf("Array resized to %d elements\n", capacity);
        }
        
        // Prompt for next number
        printf("Enter number %d: ", size + 1);
        
        // Check if input is valid integer
        if (scanf("%d", &num) != 1) {
            break; // Exit loop if non-integer is entered
        }
        
        // Store the number and increment size
        array[size] = num;
        size++;
    }
    
    // Print all entered numbers
    printf("\nNumbers in the array (%d elements):\n", size);
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    // Free the allocated memory
    free(array);
    return 0;
}
