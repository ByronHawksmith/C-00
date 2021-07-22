#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	n; // could also be int

	n = '0'; // '0' == 48
	while (n <= '9') // '9' == 57
	{
		ft_putchar(n);
		n++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return(0);
// }
