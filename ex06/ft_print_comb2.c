#include <unistd.h>

void	ft_putchar7(char c)
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
	ft_putchar7('0' + (n / 10));
	ft_putchar7('0' + (n % 10));
}

void	ft_put_combination(int l_num, int r_num)
{
	ft_put_digit_2(l_num);
	ft_putchar7(' ');
	ft_put_digit_2(r_num);
	if (l_num != 98 || r_num != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	l_num;
	int	r_num;

	l_num = 0;
	while (l_num <= 98)
	{
		r_num = l_num + 1;
		while (r_num <= 99)
		{
			ft_put_combination(l_num, r_num);
			r_num++;
		}
		l_num++;
	}
}
