#include <unistd.h>

void	ft_putchar2(char c)
{
	write(1, &c, 1);
}

/*
'a' == 97, ASCII
'z' == 122, ASCII
*/
void	ft_print_alphabet(void)
{
	char	n;

	n = 'a';
	while (n <= 'z')
	{
		ft_putchar2(n);
		n++;
	}
}
