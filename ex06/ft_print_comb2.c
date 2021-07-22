#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
Assuming a two digit number
n / 10 gives left hand digit
n % 10 gives right hand digit
*/
void	ft_put_digit_2(int n)
{
	ft_putchar('0' + (n / 10));
	ft_putchar('0' + (n % 10));
}

void	ft_put_combination(int left_d, int right_d)
{
	ft_put_digit_2(left_d);
	ft_putchar(' ');
	ft_put_digit_2(right_d);
	if (left_d != 98 || right_d != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	left_d;
	int	right_d;

	left_d = 0;
	while (left_d <= 98)
	{
		right_d = left_d + 1;
		while (right_d <= 99)
		{
			ft_put_combination(left_d, right_d);
			right_d++;
		}
		left_d++;
	}
}

// int	main()
// {
// 	ft_print_comb2();
// 	return(0);
// }
