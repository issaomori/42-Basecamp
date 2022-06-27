int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && (s1[count] != '\0' || s2[count] != '\0'))
	{
		if ((unsigned char)s1[count] != (unsigned char)s2[count])
			return ((unsigned char)s1[count] - (unsigned char)s2[count]);
		count++;
	}
	return (0);
}


#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main (void)
{
    char *str1;
    char *str2;
    unsigned int n;

    n = 6;
    str1 = "BatatA";
    str2 = "Batata";
    printf("strncmp    : %d\n", strncmp(str1, str2, n));
    printf("ft_strncmp : %d\n", ft_strncmp(str1, str2, n));
    return(1);
}