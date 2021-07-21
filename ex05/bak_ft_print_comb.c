#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_loop(int len, int numbers[])	
{	
	int	i;
	int	j;
	int	k;
	
	i = 0;
	j = 1;
	k = 2;
	
	while (i < len - 1)
	{
		while (j < len - 1)
		{
			while (k < len - 1)
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				ft_putchar('\n');
				k++;
			}
			j++;
		}
		i++;
	}	
}

void	ft_print_comb(void)
{
	int	iter;
	int	len;
	int	numbers[10];

	iter = 10;
	len = sizeof(numbers) / sizeof(int);
	while (iter < 10)
	{
		numbers[iter] = iter;
	}
	ft_loop(len, numbers);
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
