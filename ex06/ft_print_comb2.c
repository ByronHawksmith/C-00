#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_digit_2(int n)
{
	if (n < 10)
	{
		ft_putchar('0');
	}
	ft_putchar('0' + n);
}

void	ft_put_combination(int left, int right)
{
	if (left != 0)
	{
		ft_putchar(',');
	}
	ft_put_digit_2(left);
	ft_putchar(' ');
	ft_put_digit_2(right);
}

void	ft_print_comb2(void)	
{
	int	left_digit;
	int	right_digit;

	left_digit = 0;
	while (left_digit < 99)
	{
		right_digit = left_digit;
		while (right_digit <= 99)
		{
			right_digit++;
			ft_put_combination(left_digit, right_digit);
		}
		left_digit++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
