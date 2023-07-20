/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:52:37 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/01 16:44:55 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_top(int taille)
{
	int	compt;

	compt = 0;
	while (compt < taille)
	{
		if (compt == 0)
			ft_putchar('A');
		else if (compt == taille - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		compt++;
	}
}

void	print_middle(int taille)
{
	int	compt;

	compt = 0;
	while (compt < taille)
	{
		if (compt == 0 || compt == taille - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		compt++;
	}
}

void	rush(int a, int b)
{
	int	compt;

	compt = 0;
	while (compt < b && a != 0 && b != 0)
	{
		if (compt == 0 || compt == b - 1)
			print_top(a);
		else
			print_middle(a);
		compt++;
		ft_putchar('\n');
	}
}
