#include <stdlib.h>
#include <stdio.h>

int main () {
int choice, cap;

do {

fputs("[Y / N] ? ", stdout);

choice = getchar();
if (choice == '\n') { continue; }

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
