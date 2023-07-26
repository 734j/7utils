#include <stdio.h>
#include <termios.h>
#include <stdlib.h>

int main() {
    struct termios old,new;

    tcgetattr(fileno(stdin),&old); // gets something?
    tcgetattr(fileno(stdin),&new); // gets something else?
    cfmakeraw(&new); // makes new terminal settings
    tcsetattr(fileno(stdin),TCSANOW,&new); // sets those settings immediately (TCSANOW) to &new
    fputs("Press any key to continue...",stdout);
    fflush(NULL);
    fgetc(stdin); 
    tcsetattr(fileno(stdin),TCSANOW,&old); // goes back to old settings
    puts(""); // newline

    return EXIT_SUCCESS;
}
