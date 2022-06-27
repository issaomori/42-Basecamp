int main (void)
{
	int x;
	int *nbr;
	
	x = 10;
	nbr = &x;
	
	printf("%d", x);
	ft_ft(nbr);
	printf("%d", x);
}