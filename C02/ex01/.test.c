#include "ft_strncpy.c"
#include <string.h>
#include <stdio.h>

int main()
{
	unsigned int n = 5;
	char	dest[20];
	char	dest2[20];
	char	src[] = "hello";

	strncpy(dest, src, n);
	ft_strncpy(dest2, src, n);
	printf("accepted : %s\n", dest);
	printf("received : %s\n", dest2);
}