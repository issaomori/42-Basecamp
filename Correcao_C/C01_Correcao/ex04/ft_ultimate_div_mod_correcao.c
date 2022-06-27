#include <stdio.h>

int main(void)
{
	int a;
	int b;

	a = 8;
	b = 2;
	
	printf("%d %d ", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d ", a);
	printf("%d", b);
}