#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstring(char[] string)
{
	int len;
		
	len = sizeof(string)/sizeof(char);

	
}

void ft_print_comb(void)
{
	int i;
	int j;
	int k;
	char[] numbers;

	i = 0;
	j = 1;
	k = 1;
	numbers = {0,1,2,3,4,5,6,7,8,9,10};
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
