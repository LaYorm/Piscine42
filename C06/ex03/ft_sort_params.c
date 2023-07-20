/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:36:54 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/08 15:25:25 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	compt;

	compt = 0;
	while (s1[compt] && s1[compt] == s2[compt])
	{
		compt++;
	}
	return (s1[compt] - s2[compt]);
}

void	ft_sort_int_tab(char **str, int size)
{
	int		i;
	char	*temp;
	int		j;

	i = 1;
	while (i < size)
	{
		j = ft_strcmp(str[i], str[i + 1]);
		if (j <= 0)
		{
			i++;
		}
		else if (j > 0)
		{
			temp = str[i];
			str[i] = str[i + 1];
			str[i + 1] = temp;
			i = 1;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_int_tab(argv, argc - 1);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}
