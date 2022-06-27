#include <stdio.h>

int	main (void)
{
	printf("%d\n", ft_str_is_printable("-12"));
	printf("%d\n", ft_str_is_printable("123456"));
	printf("%d\n", ft_str_is_printable("abrcdef"));
	printf("%d\n", ft_str_is_printable("ABCDEF"));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("~çgdgfd*$"));
	printf("%d\n", ft_str_is_printable("/"));
}