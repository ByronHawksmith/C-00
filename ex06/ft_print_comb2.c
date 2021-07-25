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
void	print_num(int n)
{
	ft_putchar7('0' + (n / 10));
	ft_putchar7('0' + (n % 10));
}

void	print_comb(int l_num, int r_num)
{
	print_num(l_num);
	ft_putchar7(' ');
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
