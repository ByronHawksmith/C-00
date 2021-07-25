#include <unistd.h>

/*
 * The reason we have to specifically
 * handle -2147483648 is because we are
 * converting the value of a negative
 * signed integer to it's absolute value.
 *
 * If we do not handle this case we get
 * --214748364( as output. This is because
 * we are over
 */
void	ft_putnbr(int nb)
{
	char c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb / 10)
	{
		ft_putnbr(nb / 10);
	}
	c = '0' + (nb % 10);
	write(1, &c, 1);
}
