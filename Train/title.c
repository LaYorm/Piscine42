/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   title.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:26:17 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/20 12:27:20 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*str_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		i++;
	}
	return (str);
}

char *str_capitalize(char *str)
{
	int	i;

	i = 0;
	str_lowcase(str);
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		{
			ft_putchar(str[i]);
			i++;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			ft_putchar(str[i]);
			i++;
		}
		while (str[i] && (str[i] != ' ' && str[i] != '\t'))
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	return (str);
}

int main(int ac, char **av)
{
	(void)ac;
	int	i = 1;
	while (av[i])
	{
		str_capitalize(av[i]);
		write(1, "\n", 1);
		i++;
	}
}
