/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palyndrome.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:38:03 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/20 13:16:25 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_is_pal(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(str);
	while (i < size / 2)
	{
		if (str[i] != str[size - 1 - i])
			return (0);
		i++;
	}
	return (1);
} 

void	ft_palyn(char *str)
{
	if (ft_is_pal(str))
	{
		ft_putstr(str);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	ft_palyn(av[1]);
}
	



































