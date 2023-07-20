/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:03:03 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/08 14:33:45 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("%d\n", ft_iterative_power(atoi(argv[1]),atoi(argv[2])));
}*/
