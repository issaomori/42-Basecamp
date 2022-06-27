#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 1;
	b = 10;
	
	printf("%d %d ", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("%d", div);
	printf("%d", mod);
}
