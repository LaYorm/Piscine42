/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:42:56 by yrimek            #+#    #+#             */
/*   Updated: 2023/07/06 10:14:35 by yrimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	tab1[] = "";
	char	tab2[] = "1234[]]*agb8";

	ft_strcmp(tab1, tab2);
	printf("%d", ft_strcmp(tab1, tab2));
	printf("%d", strcmp(tab1, tab2));
	return (0);
}*/
