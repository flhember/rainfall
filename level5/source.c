//gcc -fno-stack-protector -z execstack -Wl,-z,norelro

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void		n()
{
	char			str[512];

	fgets(str, 512, stdin);
	printf(str);
	exit(1);
}

void		main()
{
	n();
}
