#include "ft_memcpy.c"
#include <stdio.h>

void	test_memcpy()
{
	char	test_string[] = "hello world";
	char	dest_buffer[20];

	printf("test string:%s\n", test_string);
	printf("dest buffer:%s\n", dest_buffer);
	ft_memcpy(dest_buffer, test_string, -5);
	printf("copied dest:%s\n\n", dest_buffer);
}

int	main(void)
{
	test_memcpy();
	return (0);
}
