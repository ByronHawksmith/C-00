#include <unistd.h>

/*
 * Assuming a two digit number
 * n / 10 gives left hand digit
 * n % 10 gives right hand digit
 *
 * integer division in c rounds
 * down to zero if there is a
 *remainder.
 */
void	print_num(int n)
{
	char tmp;

	tmp = '0' + (n / 10);
	write(1, &tmp, 1);
	tmp = '0' + (n % 10);
	write(1, &tmp, 1);
}

void	print_comb(int l_num, int r_num)
{
	print_num(l_num);
	write(1, " ", 1);
	print_num(r_num);
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
			print_comb(l_num, r_num);
			r_num++;
		}
		l_num++;
	}
}
