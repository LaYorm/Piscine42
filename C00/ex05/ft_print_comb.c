/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:17:49 by yrimek            #+#    #+#             */
/*   Updated: 2023/06/29 20:59:55 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print(int a, int b, int c)
{
	char	nb1;
	char	nb2;
	char	nb3;
	char	sp;
	char	vir;

	nb1 = a + '0';
	nb2 = b + '0';
	nb3 = c + '0';
	sp = ' ';
	vir = ',';
	write(1, &nb1, 1);
	write(1, &nb2, 1);
	write(1, &nb3, 1);
	if (a != 7 || b != 8 || c != 9)
	{
		write(1, &vir, 1);
		write(1, &sp, 1);
	}
	return (0);
}

void	ft_print_comb(void)
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
}
