int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
		return(i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	needle;
	int	to_find_size;

	to_find_size = ft_strlen(to_find);
	if (to_find_size == 0)
		return (str); // ele retorna a STRING completa se for 0 o que deve ser procurado
	i = 0;
	while (str[i] != '\0')
	{//qnd ela encontra algo de correspondente entre i e needle, ela entra no segundo loop
		needle = 0;
		while (str[i + needle] == to_find[needle])
		{
		needle++;
		if (needle == to_find_size)
			return (&str[i]);
		}
		i++;
	}
	return ('\0');
}


#include <unistd.h>
#include <string.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main (void)
{
    char palheiro[20] = "BatataFritFrita";
    char agulha[10] = "Frita";
    char *ret;

    ret = strstr(palheiro, agulha);

    printf("strstr   : Substring %s encontrada no endereço %p\n", ret, ret);
    
    ret = ft_strstr(palheiro, agulha);

    printf("ft_strstr: Substring %s encontrada no endereço %p\n", ret, ret);

    return(0);
}

