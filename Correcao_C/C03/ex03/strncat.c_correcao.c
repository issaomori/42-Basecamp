char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && nb > 0)
	{
		dest[i] = src[j];
		j++;
		i++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main (void)
{
    char    dest[100]= "Batata";
    char    dest2[100]= "Batata";
    char    src[]= " frita!";

    printf("strncat    : %s\n", strncat(dest, src, 3));
    printf("ft_strncat : %s\n", ft_strncat(dest2, src, 3));
    return(1);
}

