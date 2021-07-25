#include <unistd.h>

/*
 *'a' == 97, ASCII
 *'z' == 122, ASCII
 */
void	ft_print_numbers(void)
{
	char	chr;

	chr = '0';
	while (chr <= '9')
	{
		write(1, &chr, 1);
		chr++;
	}
}
