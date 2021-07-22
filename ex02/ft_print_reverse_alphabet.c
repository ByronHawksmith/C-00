#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	n; // could also be int

	n = 'z'; // 'z' == 122
	while (n >= 'a') // 'a' == 97
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
