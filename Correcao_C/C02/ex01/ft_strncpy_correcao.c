/*#include <stdio.h>
int main(void)
{
	char	src[8] = {"Gabriel\0"};
	char 	dest[30] = {"Gatorade\0"};

	printf("%s\n", src);
	printf("%s\n", dest);
	ft_strncpy(dest, src, 5);
	printf("%s\n", src);
	printf("%s\n", dest);
	return(0);
}