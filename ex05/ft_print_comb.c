#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb_helper(int len, int i, int j, int k)
{
	while (i < len - 2)
	{
		j = i + 1;
		while (j < len - 1)
		{
			k = j + 1;
			while (k < len)
			{
				ft_putchar('0' + i);
				ft_putchar('0' + j);
				ft_putchar('0' + k);
				ft_putchar(',');
				k++;
			}
			j++;
		}
		i++;
	}
}

void	ft_print_comb(void)	
{
	int	len;
	int	i;
	int	j;
	int	k;

	len = 10;
	i = 0;
	j = 1;
	k = 2;
	ft_print_comb_helper(len, i, j, k);
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
