#include <stdlib.h>
#include <stdio.h>
#include "7utils.h"

int main (int argc, char *argv[]) {

if (argc != 2) {
    fprintf(stderr, "%s: Please provide 1 file.\n", argv[0]);
    return EXIT_FAILURE;
}

FILE *file;
file = fopen(argv[1],"rb");

if (file == NULL) {
    fprintf(stderr, "Cannot open file.\n");
    return EXIT_FAILURE;
}

char buffer[BUF_SZ_2];
size_t bytes_read;
while ((bytes_read = fread(buffer, 1, BUF_SZ_2, file)) > 0) {
    fwrite(buffer, 1, bytes_read, stdout);
}

fclose(file);

return EXIT_SUCCESS;

}
