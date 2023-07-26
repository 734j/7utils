#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

// This version of confirm will work on Windows but not on Linux.

int main () {

fputs("Press any key to continue...", stdout);
fflush(stdout);
_getch();
putchar('\n');

return EXIT_SUCCESS;
}
