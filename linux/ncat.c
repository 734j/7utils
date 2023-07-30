#include <stdlib.h>
#include <stdio.h>
#include "7utils.h"

int NCAT(char filename[]) {

    FILE *file;
    file = fopen(filename,"r");

    if (file == NULL) {
        fprintf(stderr, "Cannot open file.\n");
        return 1;
    }

    char buffer[BUF_SZ_2];
    size_t bytes_read;
    while ((bytes_read = fread(buffer, 1, BUF_SZ_2, file)) > 0) {
        fwrite(buffer, 1, bytes_read, stdout);
    }
    fclose(file);
    return 0;
}

int main (int argc, char *argv[]) {

if (argc != 2) {
    fprintf(stderr, "%s: Please provide 1 file.\n", argv[0]);
    return EXIT_FAILURE;
}

int returnval = NCAT(argv[1]);
if (returnval == 1) {
    return EXIT_FAILURE;
}

return EXIT_SUCCESS;

}