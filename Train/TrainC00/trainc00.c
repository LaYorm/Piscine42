/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trainc00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:14:30 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/19 11:37:29 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	i;

	i = 'a';
	while (i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
}

void ft_print_rev_alphabet(void)
{
	int	i;

	i = 'z';
	while (i >= 'a')
	{
		write(1, &i, 1);
		i--;
	}
	write(1, "\n", 1);
}

void	ft_print_numbers(void)
{
	char	i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
}


void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

void	ft_print(int a, int b, int c)
{
	char	sep;
	char	sep1;

	sep1 = ' ';
	sep = ',';
	a = a + '0';
	b = b + '0';
	c = c + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, &sep, 1);
		write(1, &sep1, 1);
	}
}

void ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a < 8)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b + 1;
			while (c < 10)
			{
				ft_print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
	write(1, "\n", 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_putchar((a / 10) + '0');
			ft_putchar((a % 10) + '0');
			ft_putchar(' ');
			ft_putchar((b / 10) + '0');
			ft_putchar((b % 10) + '0');
			if (a != 98 || b != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + '0');
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}


int	main()
{
	ft_putchar('Z');
	ft_print_rev_alphabet();
	ft_print_alphabet();
	ft_print_numbers();
	ft_is_negative(89);
	ft_print_comb();
	ft_print_comb2();
	ft_putnbr(-2147483648);
}






































