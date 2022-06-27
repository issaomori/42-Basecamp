#include <stdio.h>

int	main (void)
{
	char	str[5] = {"Hello"};
	printf("%s\n", str);
	ft_strupcase(str);
	printf("%s\n", str);
}