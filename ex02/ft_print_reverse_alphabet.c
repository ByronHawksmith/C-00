#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int	n;

	n = 122;
	while (n > 96)
	{
		ft_putchar(n);
		n--;
	}
}
