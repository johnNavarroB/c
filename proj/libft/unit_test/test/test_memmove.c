#include "libft.h"
#include "ft_memmove.c"
#include "put_str.c"

void	*impl_memmove0(void *destination, const void *source, size_t length)
{
	unsigned	char	*aux_ptr_dest;
	unsigned	char	*aux_ptr_src;
	size_t	index;

	if (!destination && !source)
		return (destination);
	aux_ptr_dest = (unsigned char *) destination;
	aux_ptr_src = (unsigned char *) source;
	index = 0;
	if (destination > source)
		while (length --)
			aux_ptr_dest[length] = aux_ptr_src[length];
	else
		while (index < length)
		{
			aux_ptr_dest[index] = aux_ptr_src[index];
			index ++;
		}
	return	(destination);
}

void	test_memmove()
{
	char	test_string[20] = "hello world\n";
	char	dest_buffer[20];

	(void) dest_buffer;
	put_str("test_string:");
	put_str(test_string);
	put_str("dest_buffer:");
	put_str(dest_buffer);
	put_str("\n");
	ft_memmove(test_string + 5, test_string, sizeof(char) * 12);
	put_str("after_memcpy:");
	put_str(test_string);
}

int	main(void)
{
	test_memmove();
	return (0);
}
