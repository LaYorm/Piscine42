/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:12:42 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/10 17:35:39 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(int *str)
{
	int	taille;

	taille = 0;
	while (str[taille])
	{
		taille++;
	}
	return (taille);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;

	i = 0;
	diff = max - min;
	if (diff <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((diff + 1) * (sizeof(int)));
	if (!*range)
		return (-1);
	while (i < diff)
	{
		(*range)[i] = min + i;
		i++;
	}
	(*range)[i] = '\0';
	return (diff);
}

/*#include <stdio.h>
int	main(void)
{
	int *range;

	printf("Warn: Any segfault will mean that arrays 
		are not correctly allocated\n");

	printf("5:%d\n", ft_ultimate_range(&range, 0, 5));
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0],
		 range[1], range[2], range[3], range[4]);
	free (range);

	printf("0:%d\n", ft_ultimate_range(&range, 3, 3));
	free (range);
	
	printf("2:%d\n", ft_ultimate_range(&range, -1, 1));
	printf("-1, 0 : %d, %d", range[0], range[1]);
	free (range);
	return (0);
}*/
