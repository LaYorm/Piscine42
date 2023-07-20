/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TrainC01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:41:42 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/19 14:20:09 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	* mod = a % b;
}

void	ft_ultimate_mod(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = swap / *b;
	*b = swap % *b;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while(str[size])
		size++;
	return (size);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	compteur;

	compteur = 0;
	while (compteur < size / 2)
	{
		ft_swap(&tab[compteur], &tab[size - 1 - compteur]);
		compteur++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	
	while (i < size)
	{
		if (tab[i] <= tab[i + 1])
			i++;
		else
		{
			swap = tab[i];
			tab [i] = tab[i + 1];
			tab[i + 1] = swap;
			i++;
		}
	}
}

#include <stdio.h>
int main()
{
	int	tab[10] = {1, 2, 3, 4, 0, 6, 7, 8, 9, 9};
	ft_rev_int_tab(tab, 10);
	int i = 0;
	while (i < 10)
	{
		printf("%d", tab[i]);
		i++;
	}
}
































