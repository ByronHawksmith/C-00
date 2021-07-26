#include <unistd.h>

/*
 * Only +ve numbers
 * should be sent to
 * this function.
 */
void	rec(int nb)
{
	char	ch;

	if (nb == 0)
		return ;
	if (nb / 10)
		rec(nb / 10);
	ch = '0' + nb % 10;
	write(1, &ch, 1);
}

/*
 * Any time we want to print a
 * -ve nb the screen, we must
 * first convert it to a +ve
 * number.
 *
 * Otherwise we get results
 * like the following:
 *
 *           1: 1
 *          -1: -/
 *          -2: -.
 *           0: 0
 *         247: 247
 *  4294966196: -1100
 *       -1100: -1100
 * -2147483648: -214748364(
 *
 * Instead of:
 *
 *           1: 1
 *          -1: -1
 *          -2: -2
 *           0: 0
 *         247: 247
 *  4294966196: -1100
 *       -1100: -1100
 * -2147483648: -2147483648
 *
 * This happens because
 * doing '0' + (-ve nbr)
 * will take us outside of
 * the numeric ASCII range.
 *
 * If you remember back to
 * pre algebra, the following
 * properties for signed numbers
 * exist:
 *
 * (+)(+) = (+)
 * (+)(-) = (-)
 * (-)(+) = (-)
 * (-)(-) = (+)
 *
 * 5--5 = 10
 * 5-+5 = 0
 * 5+-5 = 0
 * 5++5 = 10
 */
void	ft_putnbr(int nb)
{
	char	ch;

	if (nb < 0)
	{
		write(1, "-", 1);
		rec(-(nb / 10));
		ch = '0' - nb % 10;
	}
	else
	{
		rec(nb / 10);
		ch = '0' + nb % 10;
	}
	write(1, &ch, 1);
}
