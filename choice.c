#include <stdlib.h>
#include <stdio.h>

/*
If the user enters Y then the return code will be 89
If the user enters N then the return code will be 78
*/

int main () {

int choice;
do {

fputs("[Y / N] ? ", stdout);

choice = getchar();
while ('\n' != getchar());

} while ( (choice != 'Y') && (choice != 'y') && (choice != 'N') && (choice != 'n') );

if ( (choice == 'Y') || (choice == 'y') ) 
{
return 'Y';
}

if ((choice == 'N') || (choice == 'n') )
{
return 'N';
}

return EXIT_FAILURE;
}
