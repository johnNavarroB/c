#include "ft_abs.h"
#include <stdio.h>
int	main(int count, char **args)
{
	printf("%d\n", ABS(-50));
	printf("%d\n", ABS(-2147483648));
	return (0);
}