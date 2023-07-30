#include <stdlib.h>
#include <stdio.h>
#include "7utils.h"

int main (int argc, char *argv[]) {

if (argc != 2) { // Only allows 1 file
    fprintf(stderr, "%s: Please provide 1 file.\n", argv[0]);
    return EXIT_FAILURE;
}

size_t lines;
int count = COUNT_LINES_IN_FILE(argv[1], &lines);
if (count == 1) {
    return EXIT_FAILURE;
}

fprintf(stdout, "Number of lines: %ld\n", lines);

return EXIT_SUCCESS;

}
