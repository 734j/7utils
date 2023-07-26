#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[]) {

if (argc < 2 || argc > 2) {
    fprintf(stderr, "%s: Please provide 1 file.\n", argv[0]);
    return EXIT_FAILURE;
}

int c;
int count = 0;
FILE *file;
file = fopen(argv[1],"r");

if (file == NULL) {
    fprintf(stderr, "Cannot open file.\n");
    return EXIT_FAILURE;
}

do {
    c = fgetc(file);
    if ( feof(file) ) {
        break;
    }
    if (c == '\n') {
        count++;
    }

} while(1);

fprintf(stdout, "Number of lines: %d\n", count);

fclose(file);

return EXIT_SUCCESS;

}
