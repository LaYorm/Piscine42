/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:39:45 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/20 14:15:43 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_size_int(int nb)
{
	int i;
	long	nbr;

	nbr = nb;
	i = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		i++;
	}
	while (nbr > 0)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	char	*str;
	long	nbr;
	int	size;
	int	i;

	i = 0;
	size = ft_size_int(nb);
	nbr = nb;
	printf("%d\n", size);
	str = malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[size - 1  - i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i++;
	}
	str[size] = '\0';
	return (str);
}

int	main(int ac, char **av)
{
//	int	nb = 5623148;
//	char	*str = ft_itoa(nb);
	(void)ac;
	printf("%s\n", ft_itoa(atoi(av[1])));
}
