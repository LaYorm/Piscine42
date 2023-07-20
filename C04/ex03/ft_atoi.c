/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:16:05 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/08 11:26:47 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	sign = 1;
	nb = 0;
	i = 0;
	while (str[i] && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
	{
		i++;
	}
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
		{
			sign = sign * (-1);
		}
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		nb = (nb * 10) + str[i] - 48;
		i++;
	}
	return (sign * nb);
}
/*#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char	*tab = "\n   --+- -+-4521heth";

	ft_atoi(tab);
	printf("%d\n", ft_atoi(tab));
	printf("%d\n", atoi(tab));
}*/
