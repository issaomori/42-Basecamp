unsigned int	ft_strlen(char *str)
{
	unsigned int	i;
	
	i = 0;
	while (str[i])
		i++;
	return(i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;
	unsigned int	dest_size;

	src_size = ft_strlen(src);
	dest_size = ft_strlen(dest);
	if (size <= dest_size)
		return (size + src_size);
	i = 0;
	while (src[i] != '\0' && (dest_size + i) < (size - 1))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}


#include <bsd/string.h>
#include <stdio.h>

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);

int    main(void)
{
    char str1[20] = "Batata";
    char str2[] = " Frita";
    char str3[20] = "Batata";
    char str4[] = " Frita";

    printf("ft_strlcat : \"%s\" tem %d caracteres\n", str1, ft_strlcat(str1, str2, 13));
    printf("strlcat    : \"%s\" tem %ld caracteres\n", str3, strlcat(str3, str4, 13));

}