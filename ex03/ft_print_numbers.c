#include <unistd.h>

/*
'0' == 48, ASCII
'9' == 57, ASCII
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
