/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C07.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 08:58:29 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/20 10:08:59 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	ft_strlen(char *src)
{
	int	size;

	size = 0;
	while (src[size])
		size++;
	return (size);
}

char	*ft_strdup(char *src)
{
	char	*new_tab;
	int	src_size;
	int	i;

	i = 0;
	src_size = ft_strlen(src);
	new_tab = malloc(src_size * sizeof(char));
	if (!new_tab)
		return (NULL);
	while (src[i])
	{
		new_tab[i] = src[i];
		i++;
	}
	new_tab[i] = '\0';
	return (new_tab);
}

int	*ft_range(int min, int max)
{
	int	diff;
	int	*new_tab;
	int	i;

	i = 0;
	diff = max - min;
	if (diff <= 0)
		return (NULL);
	new_tab = malloc((diff) * sizeof(int));
	if (!new_tab)
		return (NULL);
	while (min < max)
	{
		new_tab[i] = min;
		min++;
		i++;
	}
	return (new_tab);
}
int	ft_size_tot(int size, char **strs, char *sep)
{
	int	i;
	int	size_sep;
	int	size_strs;

	size_strs = 0;
	size_sep = ft_strlen(sep);
	i = 0;
	while(i < size)
	{
		size_strs += ft_strlen(strs[i]);
		i++;
	}
	return (((size_sep * (size - 1)) + size_strs) + 1);
}

void	ft_strcat(char *s1, char *s2)
{
	int	i;
	int	size_s1;

	i = 0;
	size_s1 = ft_strlen(s1);
	while (s2[i])
	{
		s1[size_s1 + i] = s2[i];
		i++;
	}
	s1[size_s1 + i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int	i;
	int	str_len;

	i = 0;
	if (size <= 0)
	{
		str = (char*)malloc(1 * sizeof(char));
		str = 0;
		return(str);
	}
	str_len = ft_size_tot(size, strs, sep);
	str = (char*)malloc(str_len * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '\0';
	while (i < size - 1)
	{
		ft_strcat(str, strs[i]);
		ft_strcat(str, sep);
		i++;
	}
	ft_strcat(str, strs[i]);
	return (str);
}
	

#include <stdio.h>
int	main(int argc, char **argv)
{
	printf("%s\n", ft_strjoin(argc, argv, " || "));
}

