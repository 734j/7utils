#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
/*
If the user enters Y then the return code will be 89
If the user enters N then the return code will be 78
*/

int main () {

int choice;
fputs("[Y / N] ? ", stdout);
do {

choice = _getch();
choice = toupper(choice);

} while ( (choice != 'Y') && (choice != 'N'));

fprintf(stdout,"%c", choice);

if ( (choice == 'Y') ) 
{
return 'Y';
}

if ((choice == 'N') )
{
return 'N';
}

return EXIT_FAILURE;
}
