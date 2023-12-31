#include <stddef.h>

#define BUF_SZ_1 1024
#define BUF_SZ_2 2048
#define BUF_SZ_4 4096
#define BUF_SZ_8 8192

#ifndef COUNT_LINES_IN_FILE_H
#define COUNT_LINES_IN_FILE_H

int COUNT_LINES_IN_FILE (char filename[], size_t *lines);

#endif /* COUNT_LINES_IN_FILE_H */

#ifndef COUNT_LINES_IN_FILE_POSIX_H
#define COUNT_LINES_IN_FILE_POSIX_H

int COUNT_LINES_IN_FILE_POSIX (char filename[], size_t *lines);

#endif /* COUNT_LINES_IN_FILE_POSIX_H */

#ifndef CONFIRM_H
#define CONFIRM_H

void CONFIRM();

#endif /* CONFIRM_H */

#ifndef CHOICE_H
#define CHOICE_H

int CHOICE();

#endif /* CHOICE_H */