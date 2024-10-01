#include <unistd.h>
#include <stdio.h>

int main() {
    char buffer[100];  // Buffer to store the input
    ssize_t bytesRead; // Variable to store the number of bytes read

    // Read from stdin (file descriptor 0) up to the size of the buffer
    bytesRead = read(0, buffer, sizeof(buffer) - 1);

    if (bytesRead == -1) {
        // Handle error if read fails
        perror("read");
        return 1;
    }

    // Null-terminate the string to ensure it's properly formed
    buffer[bytesRead] = '\0';

    // Output the data read
    printf("Input: %s\n", buffer);

    return 0;
}
