/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:36:13 by yrimek            #+#    #+#             */
/*   Updated: 2023/06/30 12:58:16 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	compt;
	int	temp;

	compt = 0;
	while (compt != size / 2)
	{
		temp = tab[compt];
		tab[compt] = tab[size - 1 - compt];
		tab[size - 1 - compt] = temp;
		compt++;
	}
}
