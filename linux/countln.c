#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "7utils.h"

#define USAGE "Usage: countln [filename] [-p filename]\nThe -p flag is if you want to count lines according to the POSIX standard\n"
int main (int argc, char *argv[]) {


size_t lines;
int opt;
int returnval;

while ((opt = getopt(argc, argv, "p:h")) != -1) {
        switch (opt) {
        
	    case 'p':
            returnval = COUNT_LINES_IN_FILE_POSIX(optarg, &lines);
            if (returnval == 1) {
                return EXIT_FAILURE;
            }
            fprintf(stdout, "Number of lines: %ld\n", lines);
	    break;

        default: 
            fprintf(stderr, "%s", USAGE);
            return EXIT_FAILURE;
        }
    }
    
    if (argc == 1) {
        fprintf(stderr, "%s: Please provide a file.\n%s", argv[0], USAGE);
	    return EXIT_FAILURE;
    } 
    
    if (argc == 2) {
        returnval = COUNT_LINES_IN_FILE(argv[1], &lines);
        if (returnval == 1) {
            return EXIT_FAILURE;
        }
        fprintf(stdout, "Number of lines: %ld\n", lines);
    }


return EXIT_SUCCESS;

}