#include <unistd.h>

void	ft_putchar4(char c)
{
	write(1, &c, 1);
}

/*
'0' == 48, ASCII
'9' == 57, ASCII
*/
void	ft_print_numbers(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{
		ft_putchar4(n);
		n++;
	}
}
