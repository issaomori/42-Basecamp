#include <stdio.h>

int main(void)
{
	char	src[6] = {"Hello\0"};
	char 	dest[6] = {"vazio\0"};

	printf("%s\n", src);
	printf("%s\n", dest);
	ft_strcpy(dest, src);
	printf("%s\n", src);
	printf("%s\n", dest);
}
