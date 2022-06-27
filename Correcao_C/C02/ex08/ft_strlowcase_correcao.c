#include <stdio.h>

int	main (void)
{
	char	str[5] = {"HELLO"};
	printf("%s\n", str);
	ft_strlowcase(str);
	printf("%s\n", str);
}