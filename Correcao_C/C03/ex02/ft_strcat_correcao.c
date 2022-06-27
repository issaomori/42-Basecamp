char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
 
}


#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main (void)
{
    char    dest[100]= "Batata";
    char    dest2[100]= "Batata";
    char    src[]= " frita!";

    printf("strcat    : %s\n", strcat(dest, src));
    printf("ft_strcat : %s\n", ft_strcat(dest2, src));
    return(1);
}

