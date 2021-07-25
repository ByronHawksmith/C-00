#include <unistd.h>

void	ft_putchar5(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar5('P');
	}
	else
	{
		ft_putchar5('N');
	}
}
