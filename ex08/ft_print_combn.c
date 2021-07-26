#include <unistd.h>

int		g_comb_len;
char	g_buf[10];

void	print_last(void)
{
	g_buf[0]++;
	write(1, g_buf, 10);
}

/*
 * g_comb_len determines the length
 * of any given comb. If buf_idx
 * == g_comb_len, print the comb,
 * a comma and a space and
 * stop recursion.
 *
 * We stop recursing here because
 * the full comb has been generated
 * and printed.
 *
 * Otherwise, increment the digit
 * at the current buf_idx in the
 * buffer and call rec_comb_gen
 * requesting it to increment the
 * digit at the next position.
 */
void	rec_comb_gen(int dig, int buf_idx)
{
	if (buf_idx == g_comb_len)
	{
		write(1, g_buf, g_comb_len);
		write(1, ", ", 2);
		return ;
	}
	while (dig <= (9 - g_comb_len + buf_idx))
	{
		dig++;
		g_buf[buf_idx] = '0' + dig;
		rec_comb_gen(dig, buf_idx + 1);
	}
}

/*
 * Make n recursive calls to the
 * rec_comb_gen function.
 *
 * The rec_comb_gen function
 * generates all the combs needed
 * for a given left_most_dig.
 */
void	ft_print_combn(int n)
{
	int	left_most_dig;

	if (n < 1 || n > 9)
		return ;
	left_most_dig = 0;
	g_comb_len = n;
	while (left_most_dig <= 9 - n)
	{
		g_buf[0] = '0' + left_most_dig;
		rec_comb_gen(left_most_dig, 1);
		left_most_dig++;
	}
	print_last();
}
