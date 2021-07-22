#include <unistd.h>

void	ft_putchar(char c)
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
		ft_putchar(n);
		n--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// 	return(0);
// }
