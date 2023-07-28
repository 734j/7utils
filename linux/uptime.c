#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/sysinfo.h>
int main () {

struct sysinfo sys_info;

int info = sysinfo(&sys_info);

printf("Uptime: %d minutes.\n", sys_info.uptime / 60);


return EXIT_SUCCESS;
}
