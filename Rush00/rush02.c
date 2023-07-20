/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:34:10 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/01 16:45:03 by yrimek           ###   ########.fr       */
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
		if (compt == 0 || compt == taille - 1)
			ft_putchar('A');
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

void	print_bot(int taille)
{
	int	compt;

	compt = 0;
	while (compt < taille)
	{
		if (compt == 0 || compt == taille - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		compt++;
	}
}

void	rush(int a, int b)
{
	int	compt;

	compt = 0;
	while (compt < b && a != 0 && b != 0)
	{
		if (compt == 0)
			print_top(a);
		else if (compt == b - 1)
			print_bot(a);
		else
			print_middle(a);
		compt++;
		ft_putchar('\n');
	}
}
