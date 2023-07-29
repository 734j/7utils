#include <stdlib.h>
#include <stdio.h>
#include "7utils.h"

size_t COUNT_LINES_IN_FILE (char filename[]) {

FILE *file;
file = fopen(filename,"rb"); // Open file

if (file == NULL) { // Check if you can open file
    fprintf(stderr, "Cannot open file.\n");
    return EXIT_FAILURE;
}

char buffer[BUF_SZ_4]; // Creates buffer with size of BUF_SZ
size_t count = 0; // Counter starting at 0
while (1) {
    size_t bytes_read = fread(buffer, 1, BUF_SZ_4, file); // puts chars from file in to buffer and returns the amount of bytes.
    for (int i = 0 ; i < bytes_read; i++) { 
        if (buffer[i] == '\n') { // Searches through the buffer for newlines.
            count++;
        }
    }
    if (feof(file)) { // If end of file is encountered then break
        break; 
    }
}
fclose(file);
return count;
}

int main (int argc, char *argv[]) {

if (argc != 2) { // Only allows 1 file
    fprintf(stderr, "%s: Please provide 1 file.\n", argv[0]);
    return EXIT_FAILURE;
}

size_t count = COUNT_LINES_IN_FILE(argv[1]);
fprintf(stdout, "Number of lines: %d\n", count);

return EXIT_SUCCESS;

}
