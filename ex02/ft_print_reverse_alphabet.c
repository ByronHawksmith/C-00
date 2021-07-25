#include <unistd.h>

/*
'a' == 97, ASCII
'z' == 122, ASCII
*/
void	ft_print_reverse_alphabet(void)
{
	char	chr;

	chr = 'z';
	while (chr >= 'a')
	{
		write(1, &chr, 1);
		chr--;
	}
}
