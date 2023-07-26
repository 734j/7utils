#include <stdlib.h>
#include <stdio.h>
#define BUF_SZ 2048

int main (int argc, char *argv[]) {

if (argc < 2 || argc > 2) {
    fprintf(stderr, "%s: Please provide 1 file.\n", argv[0]);
    return EXIT_FAILURE;
}

int c;
FILE *file;
file = fopen(argv[1],"rb");

if (file == NULL) {
    fprintf(stderr, "Cannot open file.\n");
    return EXIT_FAILURE;
}

char buffer[BUF_SZ];
size_t bytes_read;
while ((bytes_read = fread(buffer, 1, BUF_SZ, file)) > 0) {
    fwrite(buffer, 1, bytes_read, stdout);
}

fclose(file);

return EXIT_SUCCESS;

}
