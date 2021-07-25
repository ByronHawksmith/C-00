#include <unistd.h>

/*
 *'a' == 97, ASCII
 *'z' == 122, ASCII
 */
void	ft_print_alphabet(void)
{
	char	chr;

	chr = 'a';
	while (chr <= 'z')
	{
		write(1, &chr, 1);
		chr++;
	}
}
