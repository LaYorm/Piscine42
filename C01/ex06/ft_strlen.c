/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 08:39:54 by yrimek            #+#    #+#             */
/*   Updated: 2023/06/30 10:20:16 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	taille;

	taille = 0;
	while (str[taille] != '\0')
	{
		taille ++;
	}
	return (taille);
}

/*int	main(void)
{
	char	*b;
	int	a;
	char	c;

	b = "ahhhhhgc";
	a = ft_strlen(b);
	c = a + '0';
	write(1, &c, 1);
	return (0);
}
*/
