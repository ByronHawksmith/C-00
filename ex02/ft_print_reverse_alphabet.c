#include <unistd.h>

void	ft_putchar3(char c)
{
	write(1, &c, 1);
}

/*
'a' == 97, ASCII
'z' == 122, ASCII
*/
void	ft_print_reverse_alphabet(void)
{
	char	n;

	n = 'z';
	while (n >= 'a')
	{
		ft_putchar3(n);
		n--;
	}
}
