//gcc -fno-stack-protector -z execstack -Wl,-z,norelro

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void		n()
{
	system("/bin/cat /home/user/level7/.pass");
}

void		m()
{
	puts("Nope");
}

void		main(int ac, char **av)
{
	char *str = (char *) malloc( 64 );
    char *str1 = (char *) malloc( 4 );
	void *test = &m;
	strcpy(str1, av[1]);
}
