/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 08:30:42 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/17 13:17:47 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);
int	get_nbr(char c, char *base);
int	ft_atoi_base(char *str, char *base);

int	base_error(char	*str)
{
	int	base_len;
	int	i;
	int	j;

	i = 0;
	base_len = ft_strlen(str);
	if (base_len < 2)
		return (0);
	while (str[i])
	{
		j = i + 1;
		while (j < base_len)
		{
			if ((str[i] == str [j]) || str[i] == '+' || str[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_temp(int temp, int size_dix, int size_base_to)
{
	if (temp < 0)
	{
		temp = -temp;
		size_dix++;
	}
	if (temp == 0)
		size_dix++;
	while (temp > 0)
	{
		temp = temp / size_base_to;
		size_dix++;
	}
	return (size_dix);
}

char	*ft_if_dix(int dix, char *tab, int size_dix, char *base_to)
{
	int	size_base_to;

	size_base_to = ft_strlen(base_to);
	if (dix < 0)
	{
		tab[0] = '-';
		dix = -dix;
		while (size_dix > 1)
		{
			tab[size_dix - 1] = base_to[dix % size_base_to];
			dix = dix / size_base_to;
			size_dix--;
		}	
	}
	else
	{
		while (size_dix > 0)
		{
			tab[size_dix - 1] = base_to[dix % size_base_to];
			dix = dix / size_base_to;
			size_dix--;
		}
	}
	return (tab);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		dix;
	int		size_dix;
	int		temp;
	char	*tab;
	int		size_base_to;

	size_dix = 0;
	size_base_to = ft_strlen(base_to);
	dix = ft_atoi_base(nbr, base_from);
	temp = dix;
	if (base_error(base_to) == 0)
		return (0);
	if (base_error(base_from) == 0)
		return (0);
	size_dix = ft_temp(temp, size_dix, size_base_to);
	tab = malloc(size_dix * (sizeof(int)));
	if (!tab)
		return (NULL);
	ft_if_dix(dix, tab, size_dix, base_to);
	tab[size_dix] = '\0';
	return (tab);
}

/*#include <stdio.h>
int main(int ac, char **argv)
{
        (void) ac;
        char *test;
        test = ft_convert_base(argv[1], argv[2], argv[3]);
        printf("%s", test);
        free(test);
}*/
