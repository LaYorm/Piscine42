/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:08:34 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/10 14:34:26 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	resu;

	i = 1;
	resu = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		resu = resu * i;
		i++;
	}
	return (resu);
}

/*#include <stdio.h>
int	main(void)
{
	int	s;

	s = 0;
	printf("%d\n", ft_iterative_factorial(s));
}*/
