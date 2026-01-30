#include <stdio.h>

int main() {
    int size, search_key;
    int found_position = -1; 
    if (scanf("%d", &size) != 1) return 1;

    int arr[size]; 

    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    if (scanf("%d", &search_key) != 1) return 1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == search_key) {
            found_position = i;
            break; // Exit the loop once the element is found
        }
    }

    if (found_position != -1) {
        printf("found at position %d\n", found_position);
    } else {
        printf("%d not found\n", search_key);
    }

    return 0;
}

