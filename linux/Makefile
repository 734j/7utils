
all: choice confirm countln ncat uptime

choice:
	gcc -Wfatal-errors -Wall -Werror -Wextra -g choice.c functions.c -o choice

confirm:
	gcc -Wfatal-errors -Wall -Werror -Wextra -g confirm.c functions.c -o confirm

countln:
	gcc -Wfatal-errors -Wall -Werror -Wextra -g countln.c functions.c 7utils.h -o countln

ncat:
	gcc -Wfatal-errors -Wall -Werror -Wextra -g ncat.c 7utils.h -o ncat

uptime:
	gcc -Wfatal-errors -Wall -Werror -Wextra -g uptime.c -o uptime

