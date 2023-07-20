/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:59:29 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/11 13:19:07 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;

	i = nb;
	if (nb <= 0)
		return (0);
	while ((i * i) > nb)
	{
		i = i / 2;
	}
	while ((i * i) <= nb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_sqrt(atoi(argv[1])));
}*/
