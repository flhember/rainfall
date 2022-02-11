//gcc -fno-stack-protector -z execstack -Wl,-z,norelro

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	char	save1[40];
	char	save2[40];

	if (ac < 3) 
		return (1);
	strncpy(save1, av[1], 40);
	strncpy(save2, av[2], 40);
	return (0);
}
