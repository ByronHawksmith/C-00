void	ft_putchar(char c);
void	ft_print_alphabet(void);
void	ft_print_reverse_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);
void	ft_print_comb(void);
void	ft_print_comb2(void);
void	ft_putnbr(int nb);

// gcc -Wall -Wextra -Werror ex00/ft_putchar.c ex01/ft_print_alphabet.c ex02/ft_print_reverse_alphabet.c ex03/ft_print_numbers.c ex04/ft_is_negative.c ex05/ft_print_comb.c ex06/ft_print_comb2.c main.c
int	main(void)
{
	ft_putchar('A');
	ft_putchar('\n');
	ft_putchar('\n');

	ft_print_alphabet();
	ft_putchar('\n');
	ft_putchar('\n');

	ft_print_reverse_alphabet();
	ft_putchar('\n');
	ft_putchar('\n');

	ft_print_numbers();
	ft_putchar('\n');
	ft_putchar('\n');

	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(1);
	ft_putchar('\n');
	ft_putchar('\n');

	ft_print_comb();
	ft_putchar('\n');
	ft_putchar('\n');

	ft_print_comb2();
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putnbr(247);
	ft_putchar('\n');
	ft_putnbr(4294966196);
	ft_putchar('\n');
	ft_putnbr(-1100);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putchar('\n');

	return (0);
}
