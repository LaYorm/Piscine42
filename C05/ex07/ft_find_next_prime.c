/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:06:50 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/11 13:18:31 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt3(int nb)
{
	long	i;

	i = nb;
	while ((i * i) > nb)
	{
		i = i / 2;
	}
	while ((i * i) < nb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	long	i;
	int		n;

	if (nb <= 1)
		return (0);
	n = ft_sqrt3(nb);
	if (nb == 2)
		return (1);
	i = 2;
	while (i <= n)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}

/*#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_find_next_prime(atoi(argv[1])));
}*/
