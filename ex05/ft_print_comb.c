#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)	
{
	int i;
	int j;
	int k;

	i = 0;
	j = 1;
	k = 2;

	while (i < 10 - 2)
	{
		j = i + 1;
		while (j < 10 - 1)
		{
			k = j + 1;
			while (k < 10)
			{
				ft_putchar(48 + i);
				ft_putchar(48 + j);
				ft_putchar(48 + k);
				ft_putchar(',');
				k++;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
