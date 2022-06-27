int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1- *s2);
}

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main (void)
{
    char *str1;
    char *str2;

    str1 = "Ba$tata";
    str2 = "BatatA";
    printf("strcmp    : %d\n", strcmp(str1, str2));
    printf("ft_strcmp : %d\n", ft_strcmp(str1, str2));
    return(1);
}
