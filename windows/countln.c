#include <stdlib.h>
#include <stdio.h>
#define BUF_SZ 4096 // Size of buffer. You may change if you like.

int main (int argc, char *argv[]) {

if (argc != 2) { // Only allows 1 file
    fprintf(stderr, "%s: Please provide 1 file.\n", argv[0]);
    return EXIT_FAILURE;
}

FILE *file;
file = fopen(argv[1],"rb"); // Open file

if (file == NULL) { // Check if you can open file
    fprintf(stderr, "Cannot open file.\n");
    return EXIT_FAILURE;
}

char buffer[BUF_SZ]; // Creates buffer with size of BUF_SZ
size_t count = 0; // Counter starting at 0
while (1) {
    size_t bytes_read = fread(buffer, 1, BUF_SZ, file); // puts chars from file in to buffer and returns the amount of bytes.
    for (int i = 0 ; i < bytes_read; i++) { 
        if (buffer[i] == '\n') { // Searches through the buffer for newlines.
            count++;
        }
    }
    if (feof(file)) { // If end of file is encountered then break
        break; 
    }
}

fprintf(stdout, "Number of lines: %d\n", count);

fclose(file);

return EXIT_SUCCESS;

}
