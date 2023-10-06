#include <stdio.h>

int	main(void)
{
	enum my_enum
	{
		first,
		second,
		third = second * 10
	};

	//printf("%d\n", third);
	/*
	printf("int size = %d\n", sizeof(int));
	printf("long size = %d\n", sizeof(long));
	printf("long long size = %d\n", sizeof(long long));
	*/

	char	*strings[] = {"arg1", "arg2", "arg3", NULL};
	int	index = 0;

	while (strings + index)
		{printf("strings[%d]: %s\n", index, strings[index]); index ++;}

	return (0);
}