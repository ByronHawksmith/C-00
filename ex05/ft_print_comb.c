#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;
	int	iter;
	int	len;

	i = 0;
	j = 1;
	k = 1;
	iter = 10;
	len = sizeof(numbers) / sizeof(int);
	while (iter < 10)
	{
		numbers[iter] = iter;
	}
	int	numbers[10];
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
