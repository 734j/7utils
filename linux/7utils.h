#include <stddef.h>

#define BUF_SZ_1 1024
#define BUF_SZ_2 2048
#define BUF_SZ_4 4096
#define BUF_SZ_8 8192

#ifndef COUNT_LINES_IN_FILE_H
#define COUNT_LINES_IN_FILE_H

size_t COUNT_LINES_IN_FILE(char filename[]);

#endif /* COUNT_LINES_IN_FILE_H */
