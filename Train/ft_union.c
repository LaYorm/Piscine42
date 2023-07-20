/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:31:44 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/20 15:26:13 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size_dest;

	size_dest = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}

int	check_doublon(char c, char *str, int pos)
{
	int	i;
	int	compt;

	compt = 0;
	i = 0;
	while (i < pos)
	{
		if (c == str[i])
			compt++;
		i++;
	}
	if (compt > 0)
		return (0);
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;

	i = 0;
	s1 = ft_strcat(s1, s2);
	while (s1[i])
	{
		if (check_doublon(s1[i], s1, i))
			write(1, &s1[i], 1);
		i++;
	}
}			

int	main(int ac, char **av)
{
	if (ac != 3)
		return(0);
	ft_union(av[1], av[2]);
}
