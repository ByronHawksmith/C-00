#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb_helper(int left_d, int mid_d, int right_d)
{
	while (left_d < 8)
	{
		mid_d = left_d + 1;
		while (mid_d < 9)
		{
			right_d = mid_d + 1;
			while (right_d < 10)
			{
				ft_putchar('0' + left_d);
				ft_putchar('0' + mid_d);
				ft_putchar('0' + right_d);
				if (left_d != 7 || mid_d != 8 || right_d != 9)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				right_d++;
			}
			mid_d++;
		}
		left_d++;
	}
}

void	ft_print_comb(void)
{
	int	left_d;
	int	mid_d;
	int	right_d;

	left_d = 0;
	mid_d = 1;
	right_d = 2;
	ft_print_comb_helper(left_d, mid_d, right_d);
}

// int	main()
// {
// 	ft_print_comb();
// 	return(0);
// }
