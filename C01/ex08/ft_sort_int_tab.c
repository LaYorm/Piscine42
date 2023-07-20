/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:01:04 by yrimek            #+#    #+#             */
/*   Updated: 2023/06/30 12:55:14 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	compt;
	int	temp;

	compt = 0;
	while (compt < size)
	{
		if (tab[compt] < tab[compt + 1])
		{
			compt++;
		}
		if (tab[compt] >= tab[compt + 1])
		{
			temp = tab[compt];
			tab[compt] = tab[compt + 1];
			tab[compt + 1] = temp;
			compt = 0;
		}
	}
}
