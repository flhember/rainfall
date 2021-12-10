//gcc -fno-stack-protector -z execstack -Wl,-z,norelro

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void		v()
{
	char			str[512];

	fgets(str, 512, stdin);
	printf ("%s", str);
	
}

void		main()
{
	v();
}
