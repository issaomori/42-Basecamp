#include <stdio.h>

int main (void)
{
	int total;
	char str[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
	
	total = ft_strlen(str);
	printf("%d", total);
}
