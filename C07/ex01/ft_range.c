/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 10:41:26 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/10 17:34:07 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	dif;
	int	*tab;
	int	i;
	int	*a;

	a = NULL;
	i = 0;
	dif = max - min;
	if (min >= max)
		return (a);
	tab = malloc((dif + 1) * sizeof(int));
	while (i < dif)
	{
		tab[i] = min;
		i++;
		min++;
	}
	tab[i] = '\0';
	return (tab);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	int	*stock;
	int	i;

	i = 0;
	if (argc == 1)
		return (0);
	if (argc != 3 && (argv[1] >= argv[2]))
		return (0);
	stock = ft_range(atoi(argv[1]), atoi(argv[2]));
	while (i < (atoi(argv[2]) - atoi(argv[1])))
	{
		printf("%d", stock[i]);
		i++;
		if (i < (atoi(argv[2]) - atoi(argv[1])))
			printf(", ");
		if (i == (atoi(argv[2]) - atoi(argv[1])))
			printf(".\n");
	}
}*/
