#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	n;

	n = 'a'; // 'a' == 97
	while (n <= 'z') // 'z' == 122
	{
		ft_putchar(n);
		n++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return(0);
// }
