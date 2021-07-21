#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	n;

	n = 97;
	while (n < 122)
	{
		ft_putchar(n);
		n++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
