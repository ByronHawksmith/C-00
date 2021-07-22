#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_digit_2(int n)
{
	ft_putchar('0' + (n / 10));
	ft_putchar('0' + (n % 10));
}

void	ft_put_combination(int left, int right)
{
	ft_put_digit_2(left);
	ft_putchar(' ');
	ft_put_digit_2(right);
	if (left != 98 || right != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)	
{
	int	left_digit;
	int	right_digit;

	left_digit = 0;
	while (left_digit <= 98)
	{
		right_digit = left_digit + 1;
		while (right_digit <= 99)
		{
			ft_put_combination(left_digit, right_digit);
			right_digit++;
		}
		left_digit++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
