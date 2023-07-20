/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:58:10 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/08 15:56:26 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0 && nb != 0)
	{
		return (1);
	}
	else
		return (nb * ft_recursive_power(nb, (power - 1)));
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("%d\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
}*/
