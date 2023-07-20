/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:20:48 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/12 08:51:03 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt2(int nb)
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
	int	i;
	int	n;

	i = 2;
	if (nb <= 1)
		return (0);
	n = ft_sqrt2(nb);
	if (nb == 2)
		return (1);
	while (i <= n)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	int	i = 1;
	while(i < argc)
	{
		printf("%d\n", ft_is_prime(atoi(argv[i])));
		i++;
	}
}*/
