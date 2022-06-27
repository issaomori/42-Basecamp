#include <stdio.h>

int main(void)
{
	int a;
	int b;

	a = 10;
	b = 5;
	
	printf("%d %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d %d", a, b);
}