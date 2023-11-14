#include <stdio.h>
#include <stdlib.h>

int main() {
    // Initialize an array to hold the name.
    char name[20];
    // Read a string and save it to name.
    scanf("%s", name);
    // Print the greeting.
    printf("Hello, %s!", name);
    return EXIT_SUCCESS;
}
