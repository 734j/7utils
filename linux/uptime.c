#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/sysinfo.h>
int main () {

struct sysinfo sys_info;

sysinfo(&sys_info);

printf("Uptime: %ld minutes.\n", sys_info.uptime / 60);


return EXIT_SUCCESS;
}
